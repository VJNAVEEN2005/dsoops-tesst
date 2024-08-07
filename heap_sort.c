#include<stdio.h>
#include<conio.h>

void swap(int *a , int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heapify(int arr[],int n,int i){
    int largest = i;
    int left = 2*i+1;
    int right = 2*i+2;

    if(left<n && arr[left]>arr[largest]){
        largest = left;
    }
    if(right<n && arr[right]>arr[largest]){
        largest = right;
    }

    if(largest!=i){
        swap(&arr[i],&arr[largest]);
        heapify(arr,n,largest);
    }
}

void heapsort(int arr[],int n){
    int i;
    for(i=n/2-1;i>=0;i--){
        heapify(arr,n,i);
    }
    for(i=n-1;i>=0;i--){
        swap(&arr[0],&arr[i]);
        heapify(arr,i,0);
    }
}

void printArray(int arr[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
        printf("\t");
    }
}

int main(){
    int arr[50],x,i;
    printf("Enter the size : ");
    scanf("%d",&x);
    printf("Enter the elements : " );
    for(i=0;i<x;i++){
        scanf("%d",&arr[i]);
    }
    int n=x;
    heapsort(arr,n);
    printf("Sorted array : ");
    printArray(arr,n);
}