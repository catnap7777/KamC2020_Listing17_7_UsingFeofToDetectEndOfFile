//17.7 Using feof() to detect the end of a file; page 443

// THIS ONE IS NOT WORKING EITHER... NOT SURE WHY 

#include <stdlib.h>
#include <stdio.h>

#define BUFSIZE 100

int main(void)
{
    char buf(BUFSIZE);
    char filename[60];
    FILE fp;

    puts("\nEnter name of text file to display: ");
    gets(filename);

    //open the file for reading
    if((fp = fopen(filename,"r")) == NULL
    {
        fprintf(stderr, "\nError opening file...");
        exit(1);
    }
    //if end of file not reached, read a line and display it

    while(!feof(fp))
    {
        fgets(buf, BUFSIZE, fp);
        printf("%s", buf);
    }

    fclose(fp);
    return 0;
}
