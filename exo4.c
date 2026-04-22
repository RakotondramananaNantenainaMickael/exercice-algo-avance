#include<stdio.h>

int nb_chiffre_rec(int n){
    if(n==0) return 0;
    return 1+nb_chiffre_rec(n/10);
}

int nb_chiffre_iter(int n){
    int c=0;

    if(n==0) return 1;
    while (n>0)
    {
        c++;
        n/=10;
    }
    return c;
}

int main(){
    printf("%d \n", nb_chiffre_rec(80));
    printf("%d \n", nb_chiffre_iter(80));
}