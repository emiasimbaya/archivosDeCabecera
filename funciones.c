#include "funciones.h"
int main() {
    int a=5, b=2, resultado;

int suma(int a, int b) {
    return a + b;
};
printf("La suma %d\n", a, b, suma(a, b));
int resta(int a, int b) {
    return a - b;
};
printf("La resta %d\n", a, b, resta(a, b));
int multiplicacion(int a, int b) {
    return a * b;
};  
printf("La multiplicacion es %d\n", a, b, multiplicacion(a, b));
int division(int a, int b) {
    return a / b;
};
printf("La division es %d\n", a, b, division(a, b));
return 0;
}


