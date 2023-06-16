#include<stdio.h>

int main(){
    int ant = 0, sgt = 1, aux = 0;
    for(int i = 0; sgt < 10000; i++){
        printf("%i\n", aux);
        aux= sgt;
        sgt += ant;
        ant = aux;
    }
    
    
    return 0;
}