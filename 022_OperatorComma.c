// 022_OperatorComma.c

#include <stdio.h>

int main() 
{
    int x = 5;
    int y = (x = 10, x + 20);
    // Primer s´executa (x = 10), resultat es descarta.
    // Després evalua (x + 20), el valor serà el resultat de tota l´expressió.
    printf("x = %d, y = %d\n", x, y);  
    return 0;
}

// Output x = 10, y = 30;
// Més endavant hi haura exemple amb un for...

