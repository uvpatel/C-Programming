#include <stdio.h>

int main(){
    int a = 1;
    // do;
    // {
    //     printf("%d\n", a);
    //     a++;
        
    // } while (a<=5); // it thorows an error
    do
    {
        printf("%d\n", a);
        a++;
        
    } while (a<=5);
    
    return 0;
}