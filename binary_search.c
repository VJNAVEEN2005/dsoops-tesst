#include<stdio.h>
#include<conio.h>

int arr[100];

int binarySearch(int l,int h,int t){
    int mid,low=l,high=h,target=t;
    while(low<=high){
        mid =(high+low)/2;
        if(arr[mid]==target){
            return arr[mid];
        }
        else if(arr[mid]>=target){
            return arr[mid];
        }
        else{
            low = mid - 1;
        }
    }
    return low;
}

int main(){
    int n,i,target,value;
    printf("Enter the number of element : ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        printf("Enter the number %d : ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("Enter the target : ");
    scanf("%d",&target);

    value = binarySearch(0,n-1,target);

    printf("The value is %d",value);
}