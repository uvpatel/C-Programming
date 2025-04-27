#include <stdio.h>

int main(){
    int i = 10;
    if (i == 10)
    {
        if (i < 15)
        {
            printf("i is smaller than 15\n");
        }
        if (i < 12)
        {
            printf("i is smaller than 12 too.\n");
        }
        else{
            printf("i is greter than 15");
        }
    }
    else{
        if (i == 20)
        {
            if (i < 12)
            {
                printf("i is smaller than 22 too\n");
            }
            else{
                printf("i is greter than 25");
            }
            
        }
        
    }
    return 0;
}