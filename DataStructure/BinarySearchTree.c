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

struct Node* Insert(struct Node* node, int key)
{
    if (node == NULL) return New_node(key);
    if (key < node->key)
        node->left  = Insert(node->left, key);
    else if (key > node->key)
        node->right = Insert(node->right, key);
    return node;
}

struct Node* Min(struct Node* node)
{
    struct Node* current = node;
    while (current->left != NULL)
        current = current->left;
    return current;
}

struct Node* Remove(struct Node* root, int key)
{
    if (root == NULL) return root;
    if (key < root->key)
        root->left = Remove(root->left, key);
    else if (key > root->key)
        root->right = Remove(root->right, key);
    else
    {
        if (root->left == NULL)
        {
            struct Node* temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            struct Node* temp = root->left;
            free(root);
            return temp;
        }
        struct Node* temp = Min(root->right);
        root->key = temp->key;
        root->right = Remove(root->right, temp->key);
    }
    return root;
}

int main()
{
    /* Let us create following BST
              50
           /     \
          30      70
         /  \    /  \
       20   40  60   80 */
    struct Node* root = NULL;
    root = Insert(root, 50);
    Insert(root, 30);
    Insert(root, 20);
    Insert(root, 40);
    Insert(root, 70);
    Insert(root, 60);
    Insert(root, 80);

    printf("Inorder traversal of the given tree \n");
    Inorder(root);

    printf("\nDelete 20\n");
    root = Remove(root, 20);
    printf("Inorder traversal of the modified tree \n");
    Inorder(root);

    printf("\nDelete 30\n");
    root = Remove(root, 30);
    printf("Inorder traversal of the modified tree \n");
    Inorder(root);

    printf("\nDelete 50\n");
    root = Remove(root, 50); 
    printf("Inorder traversal of the modified tree \n");
    Inorder(root);

    return 0;
}
