#include<stdio.h>
int max_rec(int t[], int n){
    if(n==0) return t[0];

    int m=max_rec(t, n-1);

    return (t[n-1]>m) ? t[n-1] : m; /*Si le dernier élément t[n-1] 
    est plus grand que m alors on retourne t[n-1], sinon on retourne m*/
}

int max_iter(int t[], int n){
    int max= t[0];

    for(int i=1; i<n; i++){
        if(t[i]>max) max=t[i];
    }
    return max;
}

int max_iter2(int t[], int n){
    int max=t[0], i=1;
    
    while(i<n){
        if(t[i]>max) max=t[i];
        i++;
    }
    return max;
}

int main(){
    int t[5]= {14, 7, 2, 18};

    printf("%d \n", max_rec(t, 5));
    printf("%d \n", max_iter(t, 5));
    printf("%d \n", max_iter2(t, 5));
}