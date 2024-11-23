// C Program to count number of lines in a file
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

    // now count line numbers
    char ch;
    int lineCount = 0;

    while ((ch = fgetc(fptr)) != EOF)
    {
        if (ch == '\n')
        {
            lineCount++;
        }
    }

    printf("\nThe number of lines in the file are: %d\n\n", lineCount);

    // colse file
    fclose(fptr);

    return 0;
}