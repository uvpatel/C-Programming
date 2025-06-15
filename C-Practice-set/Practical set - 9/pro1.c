#include <stdio.h>

struct data
{
    float Book_price;
    char book_name[10];
    int book_page;
};
    

int main()
{
    struct data b1 = { 600.00,"Ansi c",500    };
    printf("book price : %f\n", b1.Book_price);
    printf("Book name: %s\n", b1.book_name);
    printf("Book pages: %d\n", b1.book_page);

    return 0;
}