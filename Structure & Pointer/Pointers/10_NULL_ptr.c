#include <stdio.h>

int main(){
    int a = 4;
    int *ptr = NULL;
    if (ptr == NULL)
    {
        printf("Null Pointer");
    }
    else{
        printf("This %d is not a null pointer",*ptr);
        
    }
    return 0;
}