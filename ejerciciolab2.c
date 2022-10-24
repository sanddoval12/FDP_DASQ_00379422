//Omar Alberto Peña Sanchez
//ejercicio 1

#include <stdio.h>
#include <math.h>

double raiz(float num1){
    printf ("%lf", sqrt(num1));
    return sqrt(num1);
}

int main()
{
    float num1;

    printf("ingesa el valor");
    scanf("%f", &num1);

    printf("su raiz es: %lf", raiz(num1));

    return 0;
}

