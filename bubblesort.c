#include<stdio.h>
#include<conio.h>

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a[] = {7,6,5,8,9,4,3,10,2,1};
    int i,j,n=10;

    for(i=0;i<n;i++){
        for(j=0;j<(n-1-i);j++){
            if(a[j]>a[j+1]){
                swap(&a[j],&a[j+1]);
            }
        }
    }

    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}