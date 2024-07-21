#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* leftchild;
    struct node* rightchild;
};

struct node* root = NULL;

void insert ( int data){
    struct node* temp;
    struct node* current;
    struct node* parent;

    temp = (struct node*) malloc(sizeof(struct node));
    temp -> data = data;
    temp -> leftchild = NULL;
    temp -> rightchild = NULL;

    if(root==NULL){
        root = temp;
    }

    else{
        current = root;
        parent = NULL;

        while(1){
            parent = current;
            if(data<parent->data){
                current = current->leftchild;
                if(current==NULL){
                    parent->leftchild=temp;
                    return;
                }
            }
            else{
                current = current->rightchild;
                if(current==NULL){
                    parent->rightchild=temp;
                    return;
                }
            }
        }
    }
}

void pre_order(struct node* root){
    if(root != NULL){
        printf("%d\t",root->data);
        pre_order(root->leftchild);
        pre_order(root->rightchild);
    }
}

void post_order(struct node* root){
    if(root != NULL){
        post_order(root->leftchild);
        post_order(root->rightchild);
        printf("%d\t",root->data);
    }
}

void in_order(struct node* root){
    if(root != NULL){
        in_order(root->leftchild);
        printf("%d\t",root->data);
        in_order(root->rightchild);
    }
}

int main(){
    int i, size;
    int a[10];

    printf("Enter the no. of element : ");
    scanf("%d",&size);

    for(i = 0 ; i <size; i++){
        printf("Enter element %d of array : ",i+1);
        scanf("%d",&a[i]);
    }

    for(i =0; i<size;i++){
        insert(a[i]);
    }

    printf("Pre Order : ");
    pre_order(root);
    printf("\nIn Order : ");
    in_order(root);
    printf("\nPost Order : ");
    post_order(root);

    getch();
    return 0;
    
}