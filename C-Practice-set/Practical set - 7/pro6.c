#include <stdio.h>
#include<string.h>

int main(){
    int len;
    printf("Enter len of username: ");
    scanf("%d",&len);
    char username[len];

    printf("Enter username: ");
    scanf("%s",&username);

    


    // Logic
    // if (  userascii >97 && userascii >65)
    // {
    //     printf("the given character is an alphabet\n");
    // }
    
    for (int i = 0; i < strlen(username); i++)
    {
          if (username[i] >= 'A' && username[i] <= 'Z') {
            printf("Uppercase letter found: %c\n", username[i]);
        } else if (username[i] >= 'a' && username[i] <= 'z') {
            printf("Lowercase letter found: %c\n", username[i]);
        } else {
            printf("Other character found: %c\n", username[i]);
        }
        
    }
    
    
    return 0;
}