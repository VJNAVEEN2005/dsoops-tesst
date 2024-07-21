#include<stdio.h>
#include<conio.h>
#include<stdbool.h>

int main(){
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    int i,n,target,mid,low,high;
    bool flag = 0;

    printf("Enter the target element : ");
    scanf("%d",&target);

    low = 0;
    high = 9;

    while(low<=high){
        mid = (low+high)/2;
        if(a[mid]==target){
            flag = 1;
            break;
        }
        else if(a[mid]<target){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }

    if(flag)
        printf("The position is  %d",mid);
    else
        printf("Not found");
}