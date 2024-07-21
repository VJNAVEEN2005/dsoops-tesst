#include<stdio.h>
#include<conio.h>

int main(){
    int n,i,flag=0;
    printf("enter the value : ");
    scanf("%d",&n);

    for(i=2;i<n*100;i++){
        if(n%i == 0){
            flag++;
        }
    }

    if(n==0 || n==1)
        flag=0;

    if(flag==1){
        printf("Prime");
    }
    else{
        printf("Not prime");
    }
}