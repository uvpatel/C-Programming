#include <stdio.h>

int main(){
    int num,original_num,count =0,arm_sum=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    original_num = num;

    int temp = num;
    while (temp != 0)
    {
        temp /= 10;
        count++;
    }
    printf("The number of digits in %d is %d\n", count);

    temp = num;
    while (temp != 0)
    {
        int rem = temp % 10;
        arm_sum += pow(rem, count);
        temp /= 10;
    }
    if (arm_sum == original_num)
    {
        printf("%d is an Armstrong number.\n", original_num);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", original_num);
    }

    return 0;
}