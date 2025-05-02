#include <stdio.h>
#define SENTINEL 0
int main(){
    
    int num = 0;
    int sum = 0;
    printf("Enter numbers to add (0 to stop):\n");
    while (num != SENTINEL)
    {
        scanf("%d",&num);
        sum += num;
    }
    printf("Sum = %d\n",sum); // subtracting SENTINEL to get the correct sum

    return 0;
}

/*

    Loop execute until it found
    sentinel value(SENTIVAL)
    Step
    -1 Get the line of data
    Step
    -2 while sentival not found:
    3. Process the data
    4. Get another line of data.

*/