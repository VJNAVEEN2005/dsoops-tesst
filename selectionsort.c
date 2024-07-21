#include<stdio.h>
#include<conio.h>

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a[] = {3,4,2,5,6,1,9,44,8,10};
    int n=10,i,j,min;

    for(i=0;i<n;i++){
        min = i;
        for(j=i+1;j<n;j++){
            if(a[min]>a[j]){
                min = j;
            }
        }
        if(min!=i){
            swap(&a[min],&a[i]);
        }
    }

    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}