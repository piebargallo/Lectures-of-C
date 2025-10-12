#include <stdio.h>

int main() 
{
    unsigned int a = 12;  
    unsigned int b = 5;   
    printf("a & b: %u\n", a & b);
    printf("b | b: %u\n", a | b);
    return 0;
}

// Output a & b 4
// Output a | b 13