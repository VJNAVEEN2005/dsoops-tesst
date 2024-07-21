#include<stdio.h>
#include<conio.h>

int main(){
    int a[] = {5,9,7,6,4,0,2,3,8,1};
    int i,length = 10;

    for(i = 0; i<length; i++){
        int j,min = i;
        for(j=i+1; j<length;j++){
            if(a[j]<a[min]){
                min = j;
            }
        }

        if(min != i){
            int temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }

    for(i=0;i<length-1;i++)
        printf("\na[%d] = %d",i,a[i]);
}