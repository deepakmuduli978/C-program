#include<stdio.h>
int lagtwo(int,int);
int lagthree(int,int,int);
int main(){
	int num,num1,num2;
	int n;

	while(1){
    printf("\npress 1 for find largest of two number \n 2 for three digit\n0 for Exit.: ");
	scanf("%d",&n);
	switch(n){
		case 0:return 0;
		break;
		
		case 1:printf("\nEnter two number:");
		scanf("%d %d",&num,&num1);
		lagtwo(num,num1);
		break;
		case 2:printf("\nEnter three number:");
		scanf("%d %d %d",&num,&num1,&num2);
		lagthree(num,num1,num2);
		break;
		
		default:printf("\nInvalid input.");
		break;
	}
}
	return 0;
}
int lagtwo(int n,int n1){
	
	if(n>n1){
		printf("\n%d is largest number",n);
		
	}
	else{
		printf("\n%d is largest number.",n1);
	}
}
int lagthree(int n,int m,int o){
	if(n>m){
		if(n>o){
			printf("\n%d is the largest number.",n);
		}
		else{
			printf("\n%d is the largest number.",o);
		}
	}
    else{
    	if(m>o){
    		printf("\n%d is the largest number.",m);
		}
		else{
			printf("\n%d is the largest number.",o);
		}
	}
}
