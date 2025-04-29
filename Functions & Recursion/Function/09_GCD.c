#include <stdio.h>

int findGCD(int,int);

int findGCD(int n,int d){
    
    for (int temp = 0; d!=0 ; )
    {
        temp = d;
        d = n % d;
        n = temp;

    }
    return n;

}
int main(){
    int x,y,result;

    printf("Enter x & y: ");
    scanf("%d %d",&x,&y);
    result = findGCD(x,y);
    printf("%d",result);
    
    return 0;
}