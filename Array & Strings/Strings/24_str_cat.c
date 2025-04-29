#include <stdio.h>
#include <string.h>
int main(){
    char city[20];
    char mycity[20];

    strcpy(city,"Delhi");
    strcpy(mycity,"Anklav");

    printf("city before copy: %s\n",city);

    strcat(city,mycity);
    
    printf("city after appending mycity into city, new city: %s\n",city);

    printf("%d",strlen(city));
    printf("\n%d",sizeof(mycity));

    return 0;
}