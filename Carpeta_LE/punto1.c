 #include <stdio.h>
 #include <math.h>

 #define PI 3.14159265

float Ingresar_Real(void);
float Ingresar_Imaginario(void);
float Calculo_Modulo(float Real, float Imaginario);
float Calculo_Angulo(float Real, float Imaginario);
void Print_Polar(float Modulo, float Angulo);

 int main (void){
     float Real=Ingresar_Real();
     float Imaginario=Ingresar_Imaginario();
     float Modulo=Calculo_Modulo(Real, Imaginario);
     float Angulo=Calculo_Angulo(Real, Imaginario);
     Print_Polar(Modulo, Angulo);
 }
 float Ingresar_Real(){
    float Real;
    printf("Ingrese el valor de la parte real:\n");
    scanf("%f", &Real);
    return Real;
 }
 float Ingresar_Imaginario(){
    float Imaginario;
    printf("Ingrese el valor de la parte imaginaria:\n");
    scanf("%f", &Imaginario);
    return Imaginario;
 }
 float Calculo_Modulo(float Real, float Imaginario){
    float Modulo;
    Modulo = sqrt(pow(fabs(Real), 2)+pow(fabs(Imaginario), 2));
    return Modulo;
 }
float Calculo_Angulo(float Real, float Imaginario){
    float Angulo;
    Angulo=atan2(Imaginario, Real)*180/PI;
    return Angulo;

}
void Print_Polar(float Modulo, float Angulo){
    printf("El numero en forma polar es: %f e^j %f", Modulo, Angulo);
}