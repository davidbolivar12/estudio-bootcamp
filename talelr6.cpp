// -Nombre: Juan Manuel Morales Santacruz
// -código: 1081273032
// -nota que creo que merezco: 3.7
#include <stdio.h>
#include <math.h>
 int factorial(int n)
 {
    int r=1;
    for(int i = 1; i <= n; i++)
    {
        r = r * i;
    }
    return r;
 }

 float taylor(float x, int n)
 {
    int cont = 0;
    float r=0;
    for(int i = 1; i <= (n*2);i=i+2)
    {
        r = r + (pow(-1,cont)*(pow(x,i)/factorial(i)));
        cont ++;
    }
    return r;
 }

 int main()
 {
    int n = 0;
    float x = 0, r= 0;
    printf("Ingrese el valor de x: ");
    scanf("%f",&x);
    printf("Ingrese el numero de terminos de la serie: ");
    scanf("%i",&n);
    r=taylor(x,n);
    printf("El resultado de la serie de taylor es: %f",r);
    return 0;
 }