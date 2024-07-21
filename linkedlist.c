#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head=NULL,*temp,*ptr;

void insert(int data){
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;

    if(head==NULL){
        head = temp;
    }
    else{
        ptr = head;
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next=temp;
    }
}

void print(){
    ptr = head;
    while(ptr){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }

}

void delete(int data){
    int i = 0;
    ptr = head;
    while(1){
        i++;
        if(i==data){
            break;
        }
        ptr = ptr->next;
    }
    ptr->next = ptr->next->next;
}

int main(){

    insert(1);
    insert(2);
    insert(3);
    insert(4);

    print();

    delete(3);
    printf("\n");
    print();

}

