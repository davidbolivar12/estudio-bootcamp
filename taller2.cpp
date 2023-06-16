#include<stdio.h>
#include<string.h>
#include<iostream>

using namespace std;

int main(){
    int contador = 0;
    char palabra [20];
    printf("Ingrese la cadena: \n");
    cin.getline(palabra, 20, '\n');
    for(int i = strlen(palabra); i>=0 ; i--){
        switch (palabra[i])
        {
        case 'a':
            contador += 1;
            break;
        case 'e':
            contador += 1;
            break;
        case 'i':
            contador += 1;
            break;
        case 'o':
            contador += 1;
            break;
        case 'u':
            contador += 1;
            break;
        default:
            break;
        }
    }
    printf("%i", contador);
    

    return 0;
}