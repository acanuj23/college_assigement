#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
int main()
{
    srand(time(NULL));
    char str[11];
    int i;
    char arr[]="0123456789ABCDEF";
    int length = rand() % 7+3;
    for(i=0;i<length;i++){
        str[i]=arr[rand() % 16];
    }
    for(i=0;i<length;i++){
        printf("%c",str[i]);
    }
    printf("%s",str);
    return 0;
}