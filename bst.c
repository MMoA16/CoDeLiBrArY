#include <stdio.h>
#include <stdlib.h>

struct node {
  int key;
  struct node *left, *right;
};
struct node *newNode(int item) {
  struct node *temp = (struct node *)malloc(sizeof(struct node));
  temp->key = item;
  temp->left = temp->right = NULL;
  return temp;
}
void inorder(struct node *root) {
  if (root != NULL) {
    inorder(root->left);
    printf("%d ", root->key);
    inorder(root->right);
  }
}
void preorder(struct node *root) {
  if (root != NULL) {
    printf("%d ", root->key);
    preorder(root->left);
    preorder(root->right);
  }
}
void posorder(struct node *root) {
  if (root != NULL) {
    posorder(root->left);
    posorder(root->right);
    printf("%d ", root->key);
  }
}

struct node *insert(struct node *node, int key) {
  if (node == NULL) return newNode(key);
  if (key < node->key)
    node->left = insert(node->left, key);
  else
    node->right = insert(node->right, key);

  return node;
}

struct node *minValueNode(struct node *node) {
  struct node *current = node;

  while (current && current->left != NULL)
    current = current->left;

  return current;
}


struct node *deleteNode(struct node *root, int key) {

  if (root == NULL) return root;
  if (key < root->key)
    root->left = deleteNode(root->left, key);
  else if (key > root->key)
    root->right = deleteNode(root->right, key);

  else {
    if (root->left == NULL) {
      struct node *temp = root->right;
      free(root);
      return temp;
    }
    else if (root->right == NULL) {
      struct node *temp = root->left;
      free(root);
      return temp;
    }
    struct node *temp = minValueNode(root->right);
    root->key = temp->key;
    root->right = deleteNode(root->right, temp->key);
  }
  return root;
}

int main() {

struct node* node = NULL;
    int n,data;
    while(1)
    {
        printf("\nEnter\n1.Insert\n2.Delete\n3.Inorder\n4.Preorder\n5.Postorder\n6.Exit\n");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
                   printf("Enter element : ");
                   scanf("%d",&data);
                   node = insert(node,data);
                   break;
            case 2:
                   printf("Enter element to delete : ");
                   scanf("%d",&data);
                   node = deleteNode(node,data);
                   break ;
            case 3:
                  inorder(node);
                  break;
            case 4: preorder(node);
                    break;
            case 5: posorder(node);
                    break;
            case 6: exit(1);
        }
    }
    return 0;

}