#include <conio.h>
#include <stdio.h>

int main() 
{
    int a = 0;
    int b = 1;
    int c = 2;

    // Operador AND (&&): ambas condiciones deben ser verdaderas
    printf("Evaluar a == b AND b < c: %d", a == b && b < c);
    printf("\n");

    // Opedador OR (||): una condición o ambas deben ser verdaderas
    printf("Evaluar a == b OR b < c: %d", a == b || b < c);
    printf("\n");
    return 0;
}

// Output AND 0
// Output OR 1
