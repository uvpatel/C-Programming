#include <stdio.h>

int main()
{
    /*
    ▪ Different data types in C consume varying amounts of memory. For example, an int uses
2 or 4 bytes, a char uses 1 byte, a float uses 4 bytes, and a double uses 8 bytes. The size of
these data types can vary depending on the system architecture (32-bit vs. 64-bit).

    */

    /*
    Range calculator 24
    ▪ Let's calculate range for 1 Byte
    ▪ 1 bit can take 0 or 1
    ▪ 1 Byte = 8 Bits
    ▪ The first bit is used as a sign ( - or + )
    ▪ then remaining bits are 7
    ▪ so we can write 2^7 = 128 different numbers for one sign
    ▪ we get 0 as a positive sign. then we have 128 numbers for the negative side,127 numbers
    for the positive side and 0 (zero)
    ▪ so the range is -128 to 127 including 0
    ▪ Formula to calculate range
    -2^(n-1) to +2^(n-1)-1

    */

    // if the range is not perfect for that perticular region so it is called overflow of data type and it thorows a garbage value when we try to access it.

    return 0;
}