#include <stdio.h>

// in old time programming are solved by macros also. so repetive logic written in macros. it reduce codes redutancy(repetive nature).


#define PI 3.14
#define AREA(r) (PI * (r) * (r))
#define CIRCUMFERENCE(r) (2 * PI * (r))


int main(){
    float radius ,area, circumference;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = 3.14 * radius * radius;
    circumference = 2 * 3.14 * radius;
    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circumference);
    


    // Using macro
    // area = AREA(radius);
    // circumference = CIRCUMFERENCE(radius);

    // printf("Area of the circle: %.2f\n", area);
    // printf("Circumference of the circle: %.2f\n", circumference);
    
    
    
    return 0;
}