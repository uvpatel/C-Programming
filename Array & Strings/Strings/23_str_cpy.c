#include <stdio.h>
#include <string.h>
int main(){

    char city[] = "Delhi";
    char mycity[] = "Anklav";

    printf("city before copy: %s\n",city);
    
    strcpy(city,mycity); // copy "my city into city"
    
    printf("city after copying mycity into city, new city: %s\n",strlen(city));

    printf("city after copy: %s\n",city);



    return 0;
}