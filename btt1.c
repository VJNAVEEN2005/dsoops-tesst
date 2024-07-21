#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node *root = NULL;

void insert(int data){
    struct node *temp;
    struct node *parent;
    struct node *current;

    temp = (struct node*)malloc(sizeof(struct node));

    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;

    if(root==NULL){
        root = temp;
    }
    else{
        current = root;
        parent = NULL;

        while(1){
            parent = current;
            if(data<parent->data){
                current=current->left;
                if(current==NULL){
                    parent->left=temp;
                    return;
                }
            }
            if(data>parent->data){
                current=current->right;
                if(current==NULL){
                    parent->right=temp;
                    return;
                }
            }
        }
    }
}

void preorder(struct node *root){
    if(root){
        printf(" %d",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

int main(){
    int i,n;

    while(1){
        printf("Enter the elements (-1 to stop) : ");
        scanf("%d",&n);
        if(n==-1){
            break;
        }
        else{
            insert(n);
        }
    }

    preorder(root);
}