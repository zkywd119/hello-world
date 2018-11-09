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
        printf("%d \n", root->key);
        Inorder(root->left);
        Inorder(root->right);
    }
}

struct Node* sortedArrayToBST(int arr[], int start, int end)
{
    /* Base Case */
    if (start > end)
      return NULL;

    /* Get the middle element and make it root */
    int mid = (start + end)/2;
    struct Node *root = New_node(arr[mid]);

    /* Recursively construct the left subtree and make it
       left child of root */
    root->left =  sortedArrayToBST(arr, start, mid-1);

    /* Recursively construct the right subtree and make it
       right child of root */
    root->right = sortedArrayToBST(arr, mid+1, end);

    return root;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr)/sizeof(arr[0]);

    /* Convert List to BST */
    struct Node *root = sortedArrayToBST(arr, 0, n-1);

    printf("Inorder traversal of the given tree \n");
    Inorder(root);

    return 0;
}
