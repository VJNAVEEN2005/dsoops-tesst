#include<stdio.h>
#include<conio.h>

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a[] = {1,4,2,5,34,6,3,2,6,10};
    int i,j;

    for(i=1;i<10;i++){
        j=i-1;
        int key = a[i];
        while(j>=0  && key<a[j]){
            a[i+1] = a[i];
            j--;
        }
        a[j+1] = key;
    }

    for(i=0;i<10;i++)
        printf("%d ",a[i]);
}