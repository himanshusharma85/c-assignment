#include<Stdio.h>
#include"header.h"
int main(){
    printf("Enter number to check prime :- ");
    int n ;
    scanf("%d",&n);
    if(prime(n)==1){
        printf("Prime\n");
    }
    else{
        printf("Not prime\n");
    }

    printf("Enter number to check factorial :- ");
    int m ;
    scanf("%d",&m);
    printf("%d\n",factorial(m));

    printf("Enter number to check even/odd :-\n");
    int b ;
    scanf("%d",&b);
    if(evenodd(b)==0){
        printf("Even\n");
    }
    else{
        printf("Odd\n");
    }

}