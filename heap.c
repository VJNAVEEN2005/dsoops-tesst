#include<stdio.h>
#include<conio.h>

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heapify(int a[],int n,int i){
    int largest = i;
    int l = (2*i)+1;
    int r = (2*i)+2;

    if(l<n && a[l]>a[largest]){
        largest = l;
    }
    if(r<n && a[r]>a[largest]){
        largest = r;
    }

    if(largest != i){
        swap(&a[i],&a[largest]);
        heapify(a,n,largest);
    }

}

void heapsort(int a[],int n){
    int i;
    for( i=(n/2)-1;i>=0;i--){
        heapify(a,n,i);
    }

    for( i=n-1;i>=0;i--){
        swap(&a[0],&a[i]);
        heapify(a,i,0);
    }

}

int main(){
    int i,j,n;
    int arr[] = {2,4,1,9,5,43,54,34};
    int length = 8;

    printf("The sorted array is : ");
    heapsort(arr,length-1);

    for(i=0;i<length;i++){
        printf(" %d",arr[i]);
    }
}
