#include <stdio.h>
#include <stdlib.h>
struct Node {
 int data;
 struct Node *left, *right;
};
struct Node* newNode(int item) {
 struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
 temp->data = item;
 temp->left = temp->right = NULL;
 return temp;
}
struct Node* insert(struct Node* node, int data) {
 if (node == NULL) return newNode(data);
 if (data < node->data)
 node->left = insert(node->left, data);
 else if (data > node->data)
 node->right = insert(node->right, data);
 return node;
}
int BSTreeNumLeaves(struct Node* node) {
 if (node == NULL)
 return 0;
 if (node->left == NULL && node->right == NULL)
 return 1;
 return BSTreeNumLeaves(node->left) + BSTreeNumLeaves(node->right);
}
struct Node* minValueNode(struct Node* node) {
 struct Node* current = node;
 while (current && current->left != NULL)
 current = current->left;
 return current;
}
struct Node* deleteNode(struct Node* root, int data) {
 if (root == NULL) return root;
 if (data < root->data)
 root->left = deleteNode(root->left, data);
 else if (data > root->data)
 root->right = deleteNode(root->right, data);
 else {
 if (root->left == NULL) {
 struct Node* temp = root->right;
 free(root);
 return temp;
 } else if (root->right == NULL) {
 struct Node* temp = root->left;
 free(root);
 return temp;
 }
 struct Node* temp = minValueNode(root->right);
 root->data = temp->data;
 root->right = deleteNode(root->right, temp->data);
 }
 return root;
}
void inorder(struct Node* root) {
 if (root != NULL) {
 inorder(root->left);
 printf("%d ", root->data);
 inorder(root->right);
 }
}
int main() {
 struct Node* root = NULL;
 root = insert(root, 50);
 root = insert(root, 30);
 root = insert(root, 20);
 root = insert(root, 40);
 root = insert(root, 70);
 root = insert(root, 60);
 root = insert(root, 80);
 printf("Inorder traversal of the given tree:\n");
 inorder(root);
 printf("\nNumber of leaf nodes: %d\n", BSTreeNumLeaves(root));
 printf("\nDelete 20\n");
 root = deleteNode(root, 20);
 printf("Inorder traversal of the modified tree:\n");
 inorder(root);
 printf("\nNumber of leaf nodes: %d\n", BSTreeNumLeaves(root));
 printf("\nDelete 30\n");
 root = deleteNode(root, 30);
 printf("Inorder traversal of the modified tree:\n");
 inorder(root);
 printf("\nNumber of leaf nodes: %d\n", BSTreeNumLeaves(root));
 printf("\nDelete 50\n");
 root = deleteNode(root, 50);
 printf("Inorder traversal of the modified tree:\n");
 inorder(root);
 printf("\nNumber of leaf nodes: %d\n", BSTreeNumLeaves(root));
 return 0;
}
