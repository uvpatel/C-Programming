#include <stdio.h>

int main(){
    for (int i = 0; i < 3; i++)
    {
        printf("Iteration %d: Address of i = %p\n",i,(void*)&i);
    }
    
    return 0;
}