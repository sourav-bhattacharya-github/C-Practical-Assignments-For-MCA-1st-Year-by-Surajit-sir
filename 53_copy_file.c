// C Program to copy contents of one file to another file

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
    // cppy the file
    FILE *copy_fptr;

    char copy_fileName[MAX_SIZE] = "textFiles/copy_simple.txt";

    copy_fptr = fopen(copy_fileName, "w");

    char ch = fgetc(fptr);
    while (ch != EOF)
    {
        fputc(ch, copy_fptr); // copy
        ch = fgetc(fptr);
    }
    printf("\nCopy file successfully\n\n");

    // colse file
    fclose(fptr);
    fclose(copy_fptr);

    return 0;
}