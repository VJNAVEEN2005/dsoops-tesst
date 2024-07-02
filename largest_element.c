#include<stdio.h>
#include<conio.h>

#define max 100

int arr[max];
int top =-1;

int isfull(){
    if(top==max)
    return 0;
    else
    return 1;
}

void push(int x){
    if(isfull){
        top++;
        arr[top]=x;
    }
    else{
        printf("Stack is full");
    }
}

int pop(){
    int a;
    if(top>=0){
        a = arr[top];
        top--;
    }
    else{
        printf("Stack is empty");
        return;
    }
    return a;
}

int largest(){
    int i,_largest;
    _largest = arr[0];

    for(i=0;i<=top;i++){
        if(_largest<arr[i]){
            _largest=arr[i];
        }
    }
    return _largest;
}

int secondlargest(int a){
    int i,_largest,l=a;
    _largest = arr[0];

    for(i=0;i<=top;i++){
        if(_largest<arr[i] && arr[i]!=l){
            _largest=arr[i];
        }
    }
    return _largest;
}

int main(){
    int n,i,element,v;
    printf("Enter the number of numbers to be entered : ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("Enter the number %d : ",i+1);
        scanf("%d",&element);
        push(element);
    }

    v = largest();
    v = secondlargest(v);

    printf("The largest number is %d",v);
}