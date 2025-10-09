#include <stdio.h>

int main()
{
    int x = 10;
    int y = 0;
    x = x--;
    y = x;
    printf("y = %d\n", y);
    return 0;
}

// Output y = 9; 
