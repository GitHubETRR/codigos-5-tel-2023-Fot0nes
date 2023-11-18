#include <stdio.h>
#include <math.h>

#define PI 3.14159265

float Ingresar_Modulo();
float Ingresar_Fase();
float Ingresar_Frecuencia();
float Calcular_Real(float modulo_impedancia, float fase_impedancia);
float Calcular_imaginario(float modulo_impedancia, float fase_impedancia);
float Calcular_inductancia(float imaginario, float Frecuencia);
float Calcular_capacitancia(float imaginario, float Frecuencia);
void Print_inductancia(float Real, float imaginario, float inductancia);
void Print_capacitancia(float Real, float imaginario, float capacitancia);
void Print_Resistencia(float Real); 

int main(void){
    printf("\nvalores del voltaje:\n");
    float modulo_voltaje=Ingresar_Modulo();
    float fase_voltaje=Ingresar_Fase();
    printf("\nvalores de la corriente:\n");
    float modulo_corriente=Ingresar_Modulo();
    float fase_corriente=Ingresar_Fase();
    float Frecuencia=Ingresar_Frecuencia();
    float modulo_impedancia=modulo_voltaje/modulo_corriente;
    float fase_impedancia=fase_voltaje-fase_corriente;
    float Real=Calcular_Real(modulo_impedancia, fase_impedancia);
    float imaginario=Calcular_imaginario(modulo_impedancia, fase_impedancia);
    if (imaginario>0){
        float inductancia = Calcular_inductancia(imaginario, Frecuencia);
        Print_inductanci(Real, imaginario, inductancia);
    }
    else if(imaginario<0){
        float capacitancia = Calcular_capacitancia(imaginario, Frecuencia);
        Print_capacitancia(Real, imaginario, capacitancia);
    }
    else{
        Print_Resistencia(Real);
    }


}
float Ingresar_Modulo(){
    float Modulo;
    printf("Valor del modulo:");
    scanf("%f", &Modulo);
    return (Modulo*sqrt(2));
}
float Ingresar_Fase(){
    float Fase;
    printf("Valor de la fase:");
    scanf("%f", &Fase);
    return Fase;
}
float Ingresar_Frecuencia(){
    float Frecuencia;
    printf("Valor de la frecuencia:");
    scanf("%f", &Frecuencia);
    return Frecuencia;
}
float Calcular_Real(float modulo_impedancia, float fase_impedancia){
    float Real;
    Real=cos(fase_impedancia*PI/180)*modulo_impedancia;
    return Real;
}
float Calcular_imaginario(float modulo_impedancia, float fase_impedancia){
    float imaginario;
    imaginario=sin(fase_impedancia*PI/180)*modulo_impedancia;
    return imaginario;
}
float Calcular_inductancia(float imaginario, float Frecuencia){
    float inductancia;
    inductancia = imaginario/(2*PI*Frecuencia);
    return inductancia;
}
float Calcular_capacitancia(float imaginario, float Frecuencia){
    float capacitancia;
    capacitancia = -1/(2*PI*imaginario*Frecuencia);
    return capacitancia;
}
void Print_inductancia(float Real, float imaginario, float inductancia){
    printf("La impedancia es de %f + j%f, el valor del inductancia es de %fH", Real, imaginario, inductancia);
}
void Print_capacitancia(float Real, float imaginario, float capacitancia){
    printf("La impedancia es de %f + j%f, el valor del capacitancitor es de %fF", Real, imaginario, capacitancia);
}
void Print_Resistencia(float Real){
    printf("La impedancia solo tiene parte real, la resistencia es de %fohms", Real);
}