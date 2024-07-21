#include<stdio.h>
#include<conio.h>

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void quicksort(int a[],int l,int r){
    if(l<r){
        int position = partition(a,l,r);
        quicksort(a,position+1,r);
        quicksort(a,l,position-1);
    }
}

int partition(int a[],int l,int r){
    int i=l,j=r;
    int pivot = r;

    while(i<j){
        while(i<r && a[pivot]>a[i]){
            i++;
        }
        while(j>l && a[pivot]<=a[j]){
            j--;
        }
        if(i<j){
            swap(&a[i],&a[j]);
        }
    }
    swap(&a[i],&a[pivot]);
    return i;
}

int main(){
    int a[] = {7,6,5,8,9,4,3,10,2,1};
    int n=10,i;
    
    quicksort(a,0,n-1);
    
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}