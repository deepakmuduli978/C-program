#include<stdio.h>
 
int main(){
    int n1;
    int fac=1,i;
    printf("Enter a number:");
    scanf("%d",&n1);
    for(i=1;i<=n1;i++){
        fac*=i;
    }
    printf("factorial of %d is %d",n1,fac);
    return 0;
}