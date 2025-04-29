#include <stdio.h>

int main(){
    /*
    
    The random-access memory is volatile, and its content is lost once the program
    terminates. In order to persist the data forever we use files.
    A file is data stored in a storage device.
    A C program can talk to the file by reading content from it and writing content to it.


    A “FILE” is a structure which needs to be created for opening the file.
    A file pointer is a pointer to this structure of the file.
    (FILE pointer is needed for communication between the file and the program).
    A FILE pointer can be created as follows:
        FILE *ptr;
        ptr = fopen("filename.ext"; "mode");


    "r" -> open for reading
    "rb" -> open for reading in binary
    "w" -> open for writing // If the file exists, the contents will be
    overwritten
    "wb" -> open for writing in binary
    "a" -> open for append // If the file does not exist, it will be created






    TYPES OF FILES
    Primarily, there are two types of files:
    1. Text files (.txt, .c)
    2. Binary files (.jpg, .dat)

    READING A FILE
        A file can be opened for reading as follows:
    FILE *ptr;
    ptr = fopen("harry.txt", "r");
    int num;

    
Let us assume that "harry.txt" contains an integer we can read that integer using:



fscanf(ptr, "%d", &num); // fscanf is 

file counterpart of scanf
This will read an integer from file in Num variables.



    */
    return 0;
}