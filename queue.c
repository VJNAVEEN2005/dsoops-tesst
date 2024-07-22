#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int queue[10],rear=-1,front=-1;

void enqueue(int data){
    if(rear==-1 && front==-1){
        rear = front = 0;
        queue[rear]=data;
    }
    else{
        rear++;
        queue[rear]=data;
    }
}

int dequeue(){
    if(rear==-1 && front==-1){
        printf("queue is empty");
    }
    else if(rear==front){
        int data = queue[front];
        front=rear=-1;
        return data;
    }
    else{
        int data = queue[front];
        front++;
        return data;
    }
}

void display(){
    int i;
    if(rear==-1 && front==-1){
        printf("Queue is empty");
    }
    else{
        for(i=front;i<=rear;i++){
            printf("%d ",queue[i]);
        }
    }
}

int main(){
    int i,j,n;

    while(1){
        printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\nChose the value : ");
        scanf("%d",&i);

        switch(i){
            case 1:
                printf("\nEnter the value to Enqueue : ");
                scanf("%d",&n);
                enqueue(n);
                break;
            case 2:
                printf("\nThe deleted element is : %d",dequeue());
                break;
            case 3:
                printf("\nDisplay : ");
                display();
                break;
            case 4:
                exit(1);
                
        }
    }
}