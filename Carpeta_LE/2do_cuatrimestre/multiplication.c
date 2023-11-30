#include <stdio.h>
#include <math.h>
int ingresar_numero(void);
int ingresar_cantidad(void);
int devolver_numero(int, int);

int main (void){
    int numero=0, cantidad=0;
    numero = ingresar_numero();
    cantidad = ingresar_cantidad();
    devolver_numero(numero, cantidad);
}
int ingresar_numero(void){
    int numero;
    printf ("Ingrese el numero del cual desea sus multiplos: ");
    scanf ("%d", &numero);
    return numero;
}
int ingresar_cantidad(void){
    int cantidad;
    printf ("Ingrese la cantidad de multiplos que desea: ");
    scanf ("%d", &cantidad);
    return cantidad;
}
int devolver_numero(int numero, int cantidad){   
    for (int i=1; i<=cantidad ;i++ ){
    printf ("%d x %d= %d\n", numero, i, i*numero);
    }
}