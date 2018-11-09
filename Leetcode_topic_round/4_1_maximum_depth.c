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

int Depth(struct Node* node)
{
    if(node==NULL)
      return 0;
    int ldepth = Depth(node->left);
    int rdepth = Depth(node->right);
    if(ldepth>rdepth)
      return(ldepth+1);
    else
      return(rdepth+1);
}

int main()
{
    /* Let us create following BST
              3
           /     \
          9      20
                  /  \
                15    7 */
    struct Node* root = NULL;
    root = New_node(3);
    root->left = New_node(9);
    root->right = New_node(20);
    root->right->left = New_node(15);
    root->right->right = New_node(7);

    printf("Inorder traversal of the given tree \n");
    Inorder(root);
    printf("the maximum depth is %d\n",Depth(root));
    return 0;
}
