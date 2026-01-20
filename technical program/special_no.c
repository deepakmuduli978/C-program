#include<stdio.h>
int main(){
    int i,n,cpy,count=0,j,n1,num=0,cpy1;
    printf("Enter a number:");
    scanf("%d",&n);
    cpy=n;
   while(n>0){
    count++;
    n/=10;
   }
   cpy1=cpy;
    for(i=1;i<=count;i++){
        n1=1;
        n=cpy%10;
        for(j=1;j<=n;j++){
            n1*=j;
        }
        cpy/=10;
        num+=n1;
    }
    if(num==cpy1){
        printf("%d is special number.",num);
    }
    else{
        printf("%d is not special number.",num);
    }
    return 0;
}
