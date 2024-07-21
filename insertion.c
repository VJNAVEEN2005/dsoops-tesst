#include<stdio.h>
#include<conio.h>

int main(){
    
    int i,j,a[100],n,key;

    printf("Enter the number of element to be entered : ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        printf("Enter the element (%d) : ",i+1);
        scanf("%d",&a[i]);
    }

    for(i=1;i<n;i++){
        key = a[i];
        j = i-1;
        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j = j-1;
        }
        a[j+1]=key;
    }

    printf("\nSorted array : ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }

}