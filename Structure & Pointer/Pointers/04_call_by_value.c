#include <stdio.h>


void func1(int,int);

int main(){
    
    int a,b;
    printf("Enter the value of a and b: ");
    scanf("%d %d",&a,&b);

    func1(a,b);
    printf("Valueof a is %d and b is %d\n",a,b);
    
    return 0;
}

void func1(int a,int b){
    a = 12;
    b = 12;
    
    printf("Valueof a is %d and b is %d\n",a,b);
}