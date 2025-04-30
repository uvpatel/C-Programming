#include <stdio.h>


struct rect
{
    float b,l;  
}r;

double area(float,float);

double area(float a,float b){
    double ar = a *b;
    printf("%lf",ar);
}
int main(){
    r.b;
    printf("enter the value of width of rect and length: ");
    scanf("%lf %lf",&r.b,&r.l);

    area(r.b,r.l);
    return 0;
}