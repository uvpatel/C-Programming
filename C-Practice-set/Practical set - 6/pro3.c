#include <stdio.h>

int main(){
    int start,end;
    // remember input should be like start <= end.
    printf("Enter start and end: ");
    scanf("%d %d",&start ,&end);

    

    for (int i = start; i <= end; i++)
    {
        if (i % 2 == 0)  // even number's logic
        {
            printf("%d ",i); // print
        }
        
    }
    
    return 0;
}