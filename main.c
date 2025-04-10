#include <stdio.h>

int main() {
    FILE *filePtr;
    char fileName[30];

    printf("Welcome to Hash Demonstrator.\n");
    printf("This program will demonstrate how changing even a single bit of a file will change the checksum.\n");
    printf("Start by entering the name of a text file to be tested\n");
    scanf("%s", fileName);

    filePtr = fopen(fileName, "r");
}