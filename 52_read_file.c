//  C Program to print contents of file
#include <stdio.h>

#define MAX_SIZE 1024

int main()
{
    char fileName[MAX_SIZE] = "textFiles/simple.txt";

    FILE *fptr = fopen(fileName, "r");

    if (fptr == NULL)
    {
        printf("\nError opening the file");
        return 1;
    }

    //Now print the file
    char ch;

    while ((ch = fgetc(fptr)) != EOF)
    {
        printf("%c", ch);
    }


    // colse file
    fclose(fptr);

    return 0;
}
