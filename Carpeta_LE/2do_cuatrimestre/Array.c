#include <stdio.h>
#define CANT 10

int main (void){
    
    int temperatura[CANT];
    for(int i=0; i<CANT;i++){
        printf("Ingresa la temperatura %  d: ", i+1);
        scanf("%d", &temperatura[i]);
    }
    
    for(int i=0; i<CANT;i++){
        printf("la temperatura %d es de: %d\n", i+1, temperatura[i]);
    }

    return 0;
}