#include<stdio.h>
int pgcd_rec(int a, int b){
    if(b==0) return a;

    return pgcd_rec(b , a%b);
}

int pgcd_iter(int a, int b){
    while(b!=0){
        int temp =b;
        b=a%b;
        a=temp;
    }

    return a;
}

int main(){
    printf("%d \n", pgcd_rec(48, 18));
    printf("%d \n", pgcd_iter(48, 18));
}
