#include <stdio.h>
unsigned int count=0;
unsigned int puissance_lineaire(unsigned int x,unsigned int n){
    if(n==0){
        printf("return 1 \n");
        count++;            
        return 1;
    }else{
        count++; 
        printf("%d ^ %d = %d x %d ^%d \n", x, n, x,x, (n-1));
        return x*puissance_lineaire(x, n-1);
    }
}
unsigned int puissance_rapide(unsigned int x, unsigned int n){
    printf("Appel %d^%d \n",x,n);
    if(n==0){
        printf("return 1 \n");
        count++;
        return 1;
    }else if(n%2 ==0){
        count++;
        unsigned int temp=puissance_rapide(x, n/2);
        printf("%d ^ %d = (%d^%d) * (%d^%d)", x,n,x,n/2,x,n/2);
        printf("Avec %d^%d = %d \n", x,n/2,temp);
        return temp*temp;
    }else if(n%2 == 1){
        count++;
        unsigned int temp= puissance_rapide(x, ((n-1)/2));
        printf("%d ^ %d = %d  (%d^%d)*(%d^%d)", x,n,x,x,((n-1)/2),x,(n-1)/2);
        printf("Avec %d^%d = %d \n", x,(n-1)/2, temp);
        return temp*temp*x;
    }else{
        return -1;
    }
}


int main(){
    /*int result= puissance_lineaire(3, 4);
    printf("resultat= %d \n", result);*/

    int result2= puissance_rapide(12, 6);
    printf("resultat= %d \n", result2);
    
}