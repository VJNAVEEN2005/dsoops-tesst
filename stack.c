#include<stdio.h>
#include<conio.h>

int top = -1, a[10];

void push(int data){
    top++;
    a[top] = data;
}

int pop(){
    int data = a[top];
    top--;
    return data;
}

void print(){
    int i = top;
    for(i = top;i>=0;i--){
        printf("%d ",a[i]);
    }
}

int main(){
    push(1);
    push(2);
    push(3);
    print();
    int a = pop();
    printf("\nDelete : %d",a);
    printf("\n");
    print();
}