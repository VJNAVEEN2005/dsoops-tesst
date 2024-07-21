#include<stdio.h>
#include<conio.h>

int main(){

    int a[] = {5,9,7,6,4,0,2,3,18,1};
    int i,j,length = 10;

    for(i=0;i<length;i++){
        for(j=0;j<(length-1-i);j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    for(i=0;i<length;i++)
        printf("\na[%d] = %d",i,a[i]);
}