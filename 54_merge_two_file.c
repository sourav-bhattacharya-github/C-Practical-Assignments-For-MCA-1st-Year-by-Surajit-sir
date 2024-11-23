//  C Program to merge contents of two files into a third file
#include <stdio.h>

#define MAX_SIZE 1024

int main()
{
    char firstFile[MAX_SIZE] = "textFiles/first.txt";
    char secondFile[MAX_SIZE] = "textFiles/second.txt";

    FILE *fptr1 = fopen(firstFile, "r");
    FILE *fptr2 = fopen(secondFile, "r");

    if (fptr1 == NULL || fptr2 == NULL)
    {
        printf("\nError opening the file");
        return 1;
    }
    // merge two file into merge file
    FILE *merge_fptr;

    char merge_fileName[MAX_SIZE] = "textFiles/merge.txt";

    merge_fptr = fopen(merge_fileName, "w");

    // first file
    char ch = fgetc(fptr1);
    while (ch != EOF)
    {
        fputc(ch, merge_fptr); // copy
        ch = fgetc(fptr1);
    }

    // second file
    ch = fgetc(fptr2);
    while (ch != EOF)
    {
        fputc(ch, merge_fptr);
        ch = fgetc(fptr2);
    }

    printf("\nMerge successfully\n\n");

    // colse file
    fclose(fptr1);
    fclose(fptr2);
    fclose(merge_fptr);
}