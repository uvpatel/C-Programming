#include <stdio.h>

struct student
{
    int roll;
    float cgpa;
    char name[100];
    struct address
    {
        int pin;
        char city_name[100];
    }add;
    
};

int main(){
    
    struct  student s1 ={
        100,9.6,"Urvil",{361305,"Anklav"}
    };
        printf("Roll no: %d\n CGPA: %f\n Name: %s\n PIN: %d \n City : %s",s1.roll,s1.cgpa,s1.name,s1.add.pin,s1.add.city_name);
    
    return 0;
}