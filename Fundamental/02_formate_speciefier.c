#include <stdio.h>

int main(){
    int a = 5;
    float f = 5.5;
    char c = 'c';
    // for input and output of a variable we use generally format specifiers. to access value.
    
    printf("The value of a is %d using (% d)",a);
    printf("The value of a is %i using (% i)",a);

    printf("The value of f is %f using % f",f);
    printf("The value of f is %F using % F",a);
    // for double using %lf
    printf("The value of c is %c",c);
    return 0;
}