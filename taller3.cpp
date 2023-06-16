#include<stdio.h>

using namespace std;

int main(){
    long long int arroz = 1;
    for(int i = 1; i <= 64; i++){
        printf("%i %lli\n",i, arroz);
        arroz *= 2;
    }


    return 0;
}