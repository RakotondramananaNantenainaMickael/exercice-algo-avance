#include<stdio.h>

int comb_rec(int n, int k, int i, int res){
    if(i>k) return res;

    return comb_rec(n,k, i+1, res*(n-k+i)/i);
}

int comb(int n, int k){
    if(k>n-k) k=n-k;

    return comb_rec(n, k, 1,1);
}

int comb_iter(int n, int k){
    if (k>n-k) k=n-k;

    int res=1;
    int i=1;

    while(i<=k){
        res =res*(n-k+i)/i;
        i++;
    }

    return res;
}

int main(){
printf("%d \n", comb(5, 2));
printf("%d \n", comb_iter(5, 2));

}