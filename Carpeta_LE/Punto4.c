#include <stdio.h>
#include <math.h>
#define PI 3.1415926
float ingreso_parte_real_impedancia();
float ingreso_parte_imaginaria_impedancia();
float ingreso_frecuencia_trabajo();
float calculo_valor_componente(float, float);
float print_valor_y_tipo_de_componente (float, float, float);

int main (void){
float real, imaginario, frecuencia, ValorComponente;
real=ingreso_parte_real_impedancia();
imaginario=ingreso_parte_imaginaria_impedancia();
frecuencia=ingreso_frecuencia_trabajo();
ValorComponente=calculo_valor_componente(frecuencia, imaginario);
print_valor_y_tipo_de_componente (real, imaginario, ValorComponente);
}

float ingreso_parte_real_impedancia(){
float real;
printf ("Ingrese la parte real\n");
scanf ("%f", &real);
return real;
}
float ingreso_parte_imaginaria_impedancia(){
float imaginario;
printf ("Ingrese la parte imaginaria\n");
scanf ("%f", &imaginario);
return imaginario;
}
float ingreso_frecuencia_trabajo(){
float frecuencia;
printf ("Ingrese la frecuencia de trabajo\n");
scanf ("%f", &frecuencia);
return frecuencia;
}

float calculo_valor_componente(float frecuencia, float imaginario){
float valorComponente=0;
if (imaginario>0){
valorComponente=imaginario/(2*PI*frecuencia);
}
if (imaginario<0){
valorComponente=-1/(2*PI*frecuencia*imaginario);
}
return valorComponente;
}
float print_valor_y_tipo_de_componente (float real, float imaginario, float valorComponente){
if (imaginario>0){
    printf ("La inductancia es igual a %f henrios\n", valorComponente);
}
if (imaginario<0){
    printf ("La capacitancia es igual a %f faradios\n", valorComponente);
}
  printf ("La resistencia es igual a %f  ohms\n", real);
}
