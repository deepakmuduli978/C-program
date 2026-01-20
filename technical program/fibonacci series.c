#include<stdio.h>
int main(){
    int first=0,second=1;
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int i,next;
    for(i=0;i<n;i++){
        printf("%d ",first);
        next=first+second;
        first=second;
        second=next;
    }
    return 0;
}