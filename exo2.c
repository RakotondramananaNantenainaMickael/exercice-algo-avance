#include <stdio.h>
long long puissance_linaire_iterative(long long a, int n){
    long long result=1;
    int i=0;

    while(i<n){
        result*=a;
        i++;
    }
    return result;
}

long long puissance_rapide(long long a, int n){
    long long result=1;

    while(n!=0){
        if(n%2==0){
            a=a*a;
            n=n/2;
        }else{
            result=result*a;
            n=n-1;
        }
    }
    return result;
}

long long puissance_rapide_iterative(long long a, int n){
    long long result=1;

    while(n>0){
        if(n%2 ==1){
            result*=a;
        }
        a*=a;
        n/=2;
    }
    return result;
}

int main(){
    int resultat= puissance_linaire_iterative(4, 3);
    printf("resultat= %d\n", resultat);
    int resultat= puissance_rapide(4,4);
    printf("resultat= %d\n", resultat);
    int resultat= puissance_rapide_iterative(4,5);
    printf("resultat= %d\n", resultat);
}