#include<stdio.h>
long long factorielle(int n){
    if(n==0){
        return 1;
    }else{
        return n*factorielle(n-1);
    }
}

long long factorielle_iterative(int n){
    long long res=1;
    int i=2;

    while (i<=n)
    {
        res*=i;
        i++;
    }
    return res;
}

int main(){
    printf("%lld \n", factorielle(5));
    printf("%lld \n", factorielle_iterative(5));

}