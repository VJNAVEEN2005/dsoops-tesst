#include<stdio.h>
#include<conio.h>

void quicksort(int arr[],int left,int right){
    if(left<right){
        int position = partition(arr,left,right);
        quicksort(arr,left,position-1);
        quicksort(arr,position+1,right);
    }
}

int partition(int arr[],int left,int right){
    int i= left, j =right-1 ,pivot = arr[right];

    while(i<j){
        while(i<right && arr[i]<pivot){
            i++;
        }
        while(j>left && arr[j]>=pivot){
            j--;
        }

        if(i<j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    if(arr[i]>pivot){
            int temp = arr[i];
            arr[i] = arr[right];
            arr[right] = temp;
    }

    return i;
}

int main(){
    int a[] = {5,9,7,6,4,0,2,3,18,1};
    int i,j,length = 10;
    
    quicksort(a,0,length-1);

    for(i=0;i<length;i++)
        printf("\na[%d] = %d",i,a[i]);
}