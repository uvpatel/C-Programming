#include <stdio.h>

int main(){
    /*
    C is a language with some fixed rules of programming. For example: Changing the size of an array is not allowed. 
    
    DYNAMIC MEMORY ALLOCATION :
        Dynamic memory allocation is a way to allocate memory to a data structure during the runtime. We can use DMA function available in C to allocate and free memory during runtime.


    FUNCTION FOR DMA IN C: 

    Following function are available in C to perform dynamic memory allocation:
    
    1. malloc()
    2. calloc()
    3. free()
    4. realloc()    



    MALLOC() FUNCTION: 
    malloc stands for memory allocation. It takes number of bytes to be allocated as an
    input and returns a pointer of type void.

    Syntax:
        ptr = (int*)malloc(30* sizeof(int))


        The exprssion returns a null pointer if the memory can't be allocated. 
        
        CALLOC() FUNCTION: 
            calloc stands for continuous allocation. It initializes each memory block with a default
            value of 0.
        Syntax:
        ptr = (float*)calloc(30, sizeof (float));

        //allocates contiguous space in memory for 30 blocks (floats)
       
       
        It the space is not sufficient, memory allocation fails, and a NULL pointer is returned. 
        
        FREE() FUNCTION:
            We can use free() function to deallocate the memory. The memory allocated using
            calloc/malloc is not deallocated automatically. 

        Syntax:
        free(ptr); //memory of ptr is released.    

        REALLOC() FUNCTION: 
            Sometimes the dynamically allocated memory is insufficient or more than required.
            realloc is used to allocate memory of new size using the previous pointer and size.
       
        Syntax:
        ptr = realloc (ptr, newsize);
        ptr = realloc (ptr, 3*sizeof(int));

*/
        return 0;
    }