#include <stdio.h>


struct studentInfo
{
    int s_id;
    char s_name[50];

};

int main(){
    // internal pointer variable - structure obj.

    struct studentInfo s = 
    {
        101, "Urvil"
    };
    struct studentInfo *ptr = &s;

    
    printf("%d",ptr -> s_id);
    printf("\n%s",ptr -> s_name);
    
    
    return 0;
}