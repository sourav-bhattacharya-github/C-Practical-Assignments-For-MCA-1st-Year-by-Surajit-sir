

// #include <stdio.h>
// #include <dirent.h>

// int main(void)
// {
//     struct dirent *de; // Pointer for directory entry

//     // opendir() returns a pointer of DIR type.
//     DIR *dr = opendir(".");

//     if (dr == NULL) // opendir returns NULL if couldn't open directory
//     {
//         printf("Could not open current directory");
//         return 0;
//     }

//     // Refer http://pubs.opengroup.org/onlinepubs/7990989775/xsh/readdir.html
//     // for readdir()
//     while ((de = readdir(dr)) != NULL)
//         printf("%s\n", de->d_name);

//     closedir(dr);
//     return 0;
// }

#include <stdio.h>
#include <string.h>
#include <dirent.h>
#define MAX_SIZE 1024

void listFiles(const char *path)
{
    struct dirent *entry;    // Pointer to directory entry
    DIR *dp = opendir(path); // Pointer to directory stream

    if (dp == NULL) // opendir returns NULL if couldn't open directory
    {
        perror("opendir");
        return;
    }

    while ((entry = readdir(dp)))
    {
        printf("%s\n", entry->d_name);
        if (entry->d_type == DT_DIR)
        {
            char newPath[MAX_SIZE];
            if (strcmp(entry->d_name, ".") != 0 && strcmp(entry->d_name, "..") != 0)
            {
                snprintf(newPath, sizeof(newPath), "%s/%s", path, entry->d_name); // add sub-directory and copy this path into newPath
                listFiles(newPath);
            }
        }
    }

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

// input =>.