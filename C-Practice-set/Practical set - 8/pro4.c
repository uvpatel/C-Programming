#include <stdio.h>
int fib(int n);

int fib(int n){
    

    if(n == 0){
        return 0;
    }
    else if(n == 1){
        return 1;
    }
    else{
        return fib(n) + fib(n-1);
    }
    return 0;
}

int main(){
    int n;
    printf("enter number: ");
    scanf("%d",&n);
    fib(n);
    printf("Fibonacci series: ",fib(n));

    return 0;
}
