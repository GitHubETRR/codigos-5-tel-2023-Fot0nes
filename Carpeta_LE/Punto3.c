#include <stdio.h>
#include <math.h>
#define PI 3.14159265

float Ingresar_Parte_Real();
float Ingresar_Parte_Imaginaria();
int Ingresar_Formato();
void Print_Binomica(float RealTotal, float ImaginarioTotal);
float Calcular_Modulo(float RealTotal, float ImaginarioTotal);
float Calcular_Angulo(float RealTotal, float ImaginarioTotal);
void Print_Polar(float Modulo, float Angulo);

int main (void){
    float Real1, Imaginario1, Modulo, Angulo, Imaginario2, Real2,RealTotal, ImaginarioTotal;
    int Formato;
    printf("Sumador de numeros complejo\n");
    printf("ingrese los valores del primer numero");
    Real1=Ingresar_Parte_Real();
    Imaginario1=Ingresar_Parte_Imaginaria();
    printf("ingrese los valores del segundo numero");
    Real2=Ingresar_Parte_Real();
    Imaginario2=Ingresar_Parte_Imaginaria();
    Formato=Ingresar_Formato();
    RealTotal=Real1+Real2;
    ImaginarioTotal=Imaginario1+Imaginario2;
    if(Formato==0){
        Print_Binomica(RealTotal, ImaginarioTotal);
    }
    else if(Formato==1){
        Modulo=Calcular_Modulo(RealTotal, ImaginarioTotal);
        Angulo=Calcular_Angulo(RealTotal, ImaginarioTotal);
        Print_Polar(Modulo, Angulo);
    }
}
float Ingresar_Parte_Real(){
    float Real;
    printf("\nvalor de la parte real:");
    scanf("%f", &Real);
    return (Real);
}
float Ingresar_Parte_Imaginaria(){
    float Imaginario;
    printf("\n valor de la parte imaginaria:");
    scanf("%f", &Imaginario);
    return (Imaginario);
}
int Ingresar_Formato(){
    int Formato;
    printf("\ningresa 1 para obtener la respuesta en formato polar o 0 para cartesiana:");
    scanf(" %d", &Formato);
    return (Formato);
}
void Print_Binomica(float RealTotal, float ImaginarioTotal){
    if(ImaginarioTotal>=0){
        printf("El numero en forma cartesiana es: %f+j%f", RealTotal, ImaginarioTotal);
    }
    else{
        printf("El numero en forma cartesiana es: %f-j%f", RealTotal, ImaginarioTotal);
    }
}
float Calcular_Modulo(float RealTotal, float ImaginarioTotal){
    float Modulo;
    Modulo = sqrt(pow(fabs(RealTotal), 2)+pow(fabs(ImaginarioTotal), 2));
    return(Modulo);
}
float Calcular_Angulo(float RealTotal, float ImaginarioTotal){
    float Angulo;
    Angulo=atan2(ImaginarioTotal, RealTotal)*180/PI;
    return (Angulo);
}
void Print_Polar(float Modulo, float Angulo){
    printf("El numero en forma polar es: %f e^j %f", Modulo, Angulo);
}
