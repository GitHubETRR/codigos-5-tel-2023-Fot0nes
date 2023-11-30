#include <stdio.h>
#define cant 10
#define rangomax 20
#define rangomin 10

void ingresar_temperaturas(int[]);
int calcular_promedio(int[]);
int calcular_min(int[]);
int calcular_max(int[]);
int calcular_rango(int[]);
void print_resultados(int, int, int, int);


int main(void){
    int temperatura[cant];
    ingresar_temperaturas(temperatura);
    int promedio=calcular_promedio(temperatura);
    int min=calcular_min(temperatura);
    int max=calcular_max(temperatura);
    int rango=calcular_rango(temperatura);
    print_resultados(promedio, min, max, rango);

}
void ingresar_temps(int temperatura[]){
    for(int i=0; i<cant; i++){
        printf("ingresa la temperatura N%d: ",i+1);
        scanf("%d", &temperatura[i]);
    }
}
int calcular_promedio(int temperatura[]){
    int promedio=0;
    for(int i=0; i<cant; i++){
        promedio+=temperatura[i];
    }
    promedio/=cant;
    return promedio;
}
int calcular_min(int temperatura[]){
    int min=temperatura[0];
    for(int i=0; i<cant; i++){
        if(temperatura[i]<min){
            min=temperatura[i];
        }
    }
    return min;
}
int calcular_max(int temperatura[]){
    int max=temperatura[0];
    for(int i=0; i<cant; i++){
        if(temperatura[i]>max){
            max=temperatura[i];
        }
    }
    return max;
}
int calcular_rango(int temperatura[]){
    int rango=0;
    for(int i=0; i<cant; i++){
        if(temperatura[i]>=rangomin && temperatura[i]<=rangomax){
            rango++;
        }
    }
    return rango;
}
void print_resultados(int promedio, int min, int max, int rango){
    printf("el promedio de temperaturas fue de: %d\n", promedio);
    printf("la temperatura minima fue de: %dC y la maxima de: %dC\n", min, max);
    printf("hay %d temperaturas entre %d y %d\n", rango, rangomin, rangomax);
}
