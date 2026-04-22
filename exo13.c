#include<stdio.h>

int arrangement(int n, int p){
    if(p==0) return 1;

    return n*arrangement(n-1, p-1);
}

int main(){
    printf("%d \n", arrangement(5, 2));
}