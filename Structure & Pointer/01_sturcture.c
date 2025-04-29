#include <stdio.h>


    struct carinfo
    {
        int model_no;
        char model_name[20];
        float average;

    };
    
int main(){
    /*Structure is a user define data type*/
    
    struct carinfo c =
    {
        101,"BMW",35.5
    };
    printf("The car model_number is %d",c.model_no);
    printf("The car Model Name is %s",c.model_name);
    printf("The car average is %f",c.average);

    return 0;
}