#include <stdio.h>
int main(void) {
//printf("Hello, World!\n");
 
 
 char *filename = "output.txt";

    // open the file for writing
    FILE *fp = fopen(filename, "w");
    if (fp == NULL)
    {
        printf("Error opening the file %s", filename);
        return -1;
    }
    // write to the text file
        fprintf(fp, "Hello, World!\n");

    // close the file
    fclose(fp);

}
