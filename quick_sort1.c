#include<stdio.h>
#include<conio.h>

void swap(int *i,int *j){
    int temp = *i;
    *i = *j;
    *j = temp;
}

void quicksort(int arr[],int left,int right){
    if(left<right){

        int pi = partion(arr,left,right);

        quicksort(arr,left,pi-1);
        quicksort(arr,pi+1,right);
    }
}

int partion(int arr[],int left,int right){
    
    int pivot=arr[right];
    int i=left-1;
    int j;

    for(j=left;j<=right-1;j++){
        if(arr[j]<=pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }

    swap(&arr[i+1],&arr[right]);
    return (i+1);

}

int main(){
    int n,i,arr[100];
    printf("Enter the number of element : ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        printf("Enter the number %d : ",i+1);
        scanf("%d",&arr[i]);
    } 

    quicksort(arr,0,n-1);

    printf("Sorted Array : ");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}