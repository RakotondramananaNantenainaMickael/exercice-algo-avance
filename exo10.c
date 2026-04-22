#include<stdio.h>

double somme(double tab[], int n){
    if(n==0) return 0.0;

    return tab[n-1]+somme(tab, n-1);
}

double moyenne_rec(double tab[], int n){
    return somme(tab, n)/n;
}

double moyenne_iter(double tab[], int n){
    double somme= 0.0;
    int i=0; 

    while(i<n){
        somme+=tab[i];
        i++;
    }

    return somme/n;
}

int main(){
    double tab[]= {2.5, 4.0, 6.5, 8.0};

    printf("%f \n", somme(tab, 4));
    printf("%f \n", moyenne_rec(tab, 4));
    printf("%f \n", moyenne_iter(tab, 4));
}