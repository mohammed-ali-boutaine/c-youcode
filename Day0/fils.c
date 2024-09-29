#include <stdio.h>


/*
In C, you can create, open, read, and write to files by declaring a pointer of type FILE, and use the fopen() function:
File *fptr;
fptr =fopren("file.txt","w");



filename	The name of the actual file you want to open (or create), like filename.txt
mode	A single character, which represents what you want to do with the file (read, write or append):
w - Writes to a file
a - Appends new data to a file
r - Reads from a file



*/
int main() {

FILE *fptr;

// create the file
fptr = fopen("test2.txt", "w");

// Close the file
fclose(fptr);

return 0;
}
