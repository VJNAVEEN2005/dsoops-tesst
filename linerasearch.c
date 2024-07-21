#include<stdio.h>
#include<conio.h>

int main(){
    int a[] = {1,3,4,5,6,7,2,8},n,i,target;

    printf("Enter the value : ");
    scanf("%d",&n);
    target = n;
    for(i=0;i<8;i++){
        if(target==a[i]){
            break;
        }
    }

    printf("The target index is %d",i);
}