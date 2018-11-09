#include <stdio.h>
#include <stdlib.h>
struct Node
{
  int key;
  struct Node *left, *right;
};

struct Node* New_node(int new_key)
{
  struct Node* new_node = (struct Node*) malloc (sizeof(struct Node));
  new_node->key = new_key;
  new_node->left = new_node->right = NULL;
  return new_node;
}

void Inorder(struct Node* root)
{
    if (root != NULL)
    {
        Inorder(root->left);
        printf("%d \n", root->key);
        Inorder(root->right);
    }
}

int validate(struct Node* root)
{
  int flag  = 0;
    if (root != NULL)
    {
      if(((root->left!=NULL)&&(root->key < root->left->key)) || ((root->right!=NULL)&&(root->key > root->right->key)))
      {
        flag = 1;
        return flag;
      }
      else
      {
        validate(root->left);
        validate(root->right);
      }
    }
    return flag;
}

int main()
{
  int i = 0;
    /* Let us create following BST
              3
           /     \
          9      20
                  /  \
                15    7 */
    struct Node* root = NULL;
//    root = New_node(2);
//    root->left = New_node(1);
//    root->right = New_node(3);

    root = New_node(5);
    root->left = New_node(1);
    root->right = New_node(4);
    root->right->left = New_node(3);
    root->right->right = New_node(6);

    printf("Inorder traversal of the given tree \n");
    Inorder(root);
    i = validate(root);
    if(i==0)
      printf("the BST is valid.\n");
    else
      printf("the BST is not valid.\n");
    return 0;
}
