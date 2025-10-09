#include <stdio.h>

int main()
{
    int x = 10;
    // Sempre s´han d´inicalitzar les variables, int y; és incorrecte
    // y pot pendre u o qualsevol valor.
    int y = 0; 
    // x = x--; Equival a x = x - 1;
    // predecrement resta u abans de fer l´assignació
    x = --x; 
    y = x;
    printf("y = %d\n", y);
    return 0;
}

// Output y = 9; 
