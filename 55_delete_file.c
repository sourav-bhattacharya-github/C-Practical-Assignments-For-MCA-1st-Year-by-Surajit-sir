// C program to delete a file

#include <stdio.h>
#define MAX_SIZE 1024

int main()
{
    char fileName[MAX_SIZE];

    printf("Enter the name of file you wish to delete : ");
    gets(fileName);

    // Now delete the file
    if (remove(fileName) == 0)
    {
        printf("\nFile %s was deleted successfully\n\n", fileName);
    }
    else
    {
        printf("Error deleting the file %s", fileName);
        perror("Error");
    }
    return 0;
}

/*
input =>textFile/merge.txtt

*/
