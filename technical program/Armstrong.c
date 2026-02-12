#include<stdio.h>
int main(){
    int n,cpy,i,n1,count=0,j,sum=0,mul;
    printf("Enter a number:");
    scanf("%d",&n);
    n1=n;
    while(n>0){
        count++;
        n/=10;
    }

    cpy=n1;
    for(i=1;i<=count;i++){
    	mul=1;
      n=n1%10;
      for(j=1;j<=count;j++){
        mul*=n;
     
      }
      n1/=10;
      sum+=mul;
    
    }
    if(sum==cpy){
        printf("This is armstrong number.");
    }
    else{
        printf("This not an armstrong number.");
    }
    return 0;
}
