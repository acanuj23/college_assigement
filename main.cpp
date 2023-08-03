#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <stdlib.h>
int main() {
    srand(time(0)); // Seed for random number generation based on current time

    // Generate a random length between 3 and 10 characters
    int length = rand() % 8 + 3;

    // Generate a random alphanumeric string of the specified length
    std::string alphanumeric;
    const std::string characters = "0123456789ABCDEF";//possible input values for alphanumric String
    for (int i = 0; i < length; i++) { //starting of loop
        alphanumeric += characters[rand() % characters.length()];
    }

    std::cout << "Random Alphanumeric String: " << alphanumeric << std::endl;

    // Determine the highest base of the alphanumeric string
    int highestBase = 0;
    for (char c : alphanumeric) {
        if (isdigit(c)) {
            int num = c - '0';
            highestBase = std::max(highestBase, num);
        } else if (isalpha(c)) {
            int num = toupper(c) - 'A' + 10;
            highestBase = std::max(highestBase, num);
        }
    }

    std::cout << "The highest Base of the  " << alphanumeric << " is "<< highestBase+1 <<std :: endl ;
    return 0;
}