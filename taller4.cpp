#include<stdio.h>

int main(){
    int multiplicando = 0, multiplicador =0 , resultado = 0;

    printf("ingrese el multiplicando: \n");
    scanf("%i", &multiplicando);
    printf("ingrese el multiplicador: \n");
    scanf("%i", &multiplicador);

    for(int i =0; i< multiplicador; i++){

        resultado+= multiplicando;
    }
    printf("El resultado de multiplicar %i por %i es : %i", multiplicando, multiplicador, resultado);

    return 0;
}