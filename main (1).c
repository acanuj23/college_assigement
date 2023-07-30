/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to generate a random alphanumeric character ('9' or 'A')
char randomAlphanumeric() {
    int random = rand() % 2;
    return (random == 0) ? '9' : 'A';
}

// Function to generate a random alphanumeric string with random length between 3 and 10
void generateRandomString(char *str) {
    int length = rand() % 8 + 3; // Random length between 3 and 10
    for (int i = 0; i < length; i++) {
        str[i] = randomAlphanumeric();
    }
    str[length] = '\0'; // Null-terminate the string
}

// Function to determine the highest base of the alphanumeric string
int determineHighestBase(const char *str) {
    int highestBase = -1;
    int i = 0;

    while (str[i] != '\0') {
        int val = (int)str[i];
        if (str[i] >= 'A') {
            val -= 'A' - 10; // Convert hexadecimal characters 'A' to 'F' to decimal value 10 to 15
        } else {
            val -= '0'; // Convert numerical characters '0' to '9' to decimal value 0 to 9
        }

        if (val > highestBase) {
            highestBase = val;
        }

        i++;
    }

    return highestBase + 1; // Adding 1 to the highest base as per the formula
}

int main() {
    srand(time(0)); // Seed the random number generator with current time

    char randomString[11]; // Maximum length is 10 characters, plus 1 for the null terminator

    generateRandomString(randomString);
    printf("Random Alphanumeric String: %s\n", randomString);

    int highestBase = determineHighestBase(randomString);
    printf(" The Highest Base of the %s\n", randomString);
    printf("%d", highestBase);
    return 0;
}
