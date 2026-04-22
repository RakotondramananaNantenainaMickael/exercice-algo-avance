#include<stdio.h>

int fib_rec(int n){
    if(n==0) return 0; 
    if(n==1) return 1;

    return fib_rec(n-1)+fib_rec(n-2);
}

int fib_iter(int n){
    if(n==0) return 0; 
    if(n==1) return 1;

    int a=0, b=1,c;

    for(int i=2; i<=n; i++){
        c=a+b;
        a=b;
        b=c;
    }
    return b;
}

int main(){
    printf("%d \n", fib_rec(10));
    printf("%d \n", fib_iter(10));
}