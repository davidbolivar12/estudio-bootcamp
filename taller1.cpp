#include<stdio.h>
#include<string.h>
#include<iostream>

using namespace std;

int main(){
    char palabra [20];
    printf("Ingrese la cadena: \n");
    cin.getline(palabra, 20, '\n');
    {
        for(int i = (strlen(palabra)-1); i >= 0;  i--){
            printf("%c", palabra[i]);
        }  
    }
    

    return 0;
}