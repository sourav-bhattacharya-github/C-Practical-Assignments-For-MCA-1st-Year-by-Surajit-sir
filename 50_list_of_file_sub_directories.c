//  C Program to list all files and sub-directories in a directory

#include <stdio.h>
#include <string.h>
#include <dirent.h> // This Directory entry functions for reading directory contents

#define MAX_SIZE 1024

void listFiles(const char *path)
{
    struct dirent *entry;    // Pointer to directory entry
    DIR *dp = opendir(path); // Pointer to directory stream

    // Uses `opendir(path)` to open the directory stream. If the directory cannot be opened, it prints an error message using `perror` and returns.

    if (dp == NULL) // opendir returns NULL if couldn't open directory
    {
        perror("opendir");
        return;
    }

    while ((entry = readdir(dp))) // Uses `readdir(dp)` in a loop to read each entry in the directory.
    {
        printf("%s\n", entry->d_name);

        if (entry->d_type == DT_DIR)
        {
            char newPath[MAX_SIZE];
            if (strcmp(entry->d_name, ".") != 0 && strcmp(entry->d_name, "..") != 0)
            {
                snprintf(newPath, sizeof(newPath), "%s/%s", path, entry->d_name); // copy path into newPath

                // recursive call
                listFiles(newPath);
            }
        }
    }

    // Close dir
    closedir(dp);
}

int main()
{
    char path[MAX_SIZE];

    printf("Enter path to list files: ");
    scanf("%s", path);

    listFiles(path);

    return 0;
}