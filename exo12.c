#include<stdio.h>
int comb(int n, int k){
    if(k==0 || k ==n) return 1;

    return comb(n-1, k-1) +comb(n-1, k);
}

int main(){
    printf("%d \n", comb(5,2));
}