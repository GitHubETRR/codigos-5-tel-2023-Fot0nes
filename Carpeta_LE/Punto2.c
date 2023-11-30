#include <stdio.h>
#include <math.h>
#define PI 3.14159265

float Ingresar_Modulo();
float Ingresar_Angulo();
float Calculo_Imaginario(float Modulo, float Angulo);
float Calculo_Real(float Modulo, float Angulo);
void Print_Binomica(float Imaginario, float Real );

int main (void){
float Modulo= Ingresar_Modulo();
float Angulo= Ingresar_Angulo();
float Imaginario= Calculo_Imaginario(Modulo, Angulo);
float Real= Calculo_Real(Modulo, Angulo);
Print_Binomica(Imaginario, Real );
}
float Ingresar_Modulo(){
    float Modulo;
    printf("Ingrese el valor del modulo:\n");
    scanf("%f", &Modulo);
    return Modulo;
 }
 float Ingresar_Angulo(){
    float Angulo;
    printf("Ingrese el valor del angulo:\n");
    scanf("%f", &Angulo);
    return Angulo;
 }
 float Calculo_Imaginario(float Modulo, float Angulo){
    float Imaginario;
    Imaginario = Modulo*cos(Angulo*PI/180);
    return Imaginario;
 }
float Calculo_Real(float Modulo, float Angulo){
    float Real;
    Real = Modulo*sin(Angulo*PI/180);
    return Real;
}
    void Print_Binomica (float Imaginario, float Real){
    if (Imaginario>=0){
    printf("El numero en forma binomica es: %f + J%f", Imaginario, Real);
    }
    else{ 
    printf("El numero en forma binomica es: %f - J%f", Imaginario, Real);
    }
    }


