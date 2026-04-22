#include<stdio.h>

int somme_rec(int t[], int n){
    if(n==0) return 0;

    return t[n-1]+ somme_rec(t, n-1);
}

int somme_iter(int t[], int n){
    int s=0;
    for(int i=0; i<n; i++) s+=t[i];

    return s;
}

int somme_iter2(int t[], int n){
    int s=0, i=0;
    while(i<n){
        s+=t[i];
        i++;
    }
    return s;
}

int main(){
    int t[5]= {1, 2, 3, 4, 5};

    printf("%d \n", somme_rec(t, 5));
    printf("%d \n", somme_iter(t, 5));
    printf("%d \n", somme_iter2(t, 5));
}