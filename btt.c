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
    struct node *current;
    struct node *parent;

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
                current = current->left;
                if(current == NULL){
                    parent->left=temp;
                    return;
                }
            }
            else{
                current=current->right;
                if(current == NULL){
                    parent->right=temp;
                    return;
                }
            }
        }
    }
}

void preorder(struct node *root){
    if(root!=NULL){
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }   
}

void inorder(struct node *root){
    if(root!=NULL){
        inorder(root->left);
        printf(" %d",root->data);
        inorder(root->right);
    }
}

void postorder(struct node *root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        printf(" %d",root->data);
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
    
    printf("\nPreOrder : ");
    preorder(root);
    printf("\nInOrder : ");
    inorder(root);
    printf("\nPostOrder : ");
    postorder(root);

}