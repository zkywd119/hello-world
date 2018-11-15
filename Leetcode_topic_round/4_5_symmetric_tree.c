
// Recursive C program for level order traversal of Binary Tree
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* left, *right;
};

struct node* newNode(int data)
{
    struct node* node = (struct node*)
                        malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return(node);
}

int isMirror(struct node *root1, struct node *root2)
{
    // If both trees are emptu, then they are mirror images
    if (root1 == NULL && root2 == NULL)
        return 1;

    // For two trees to be mirror images, the following three
    // conditions must be true
    // 1 - Their root node's data must be same
    // 2 - left subtree of left tree and right subtree
    //      of right tree have to be mirror images
    // 3 - right subtree of left tree and left subtree
    //      of right tree have to be mirror images
    if (root1 && root2 && root1->data == root2->data)
        return isMirror(root1->left, root2->right) &&
               isMirror(root1->right, root2->left);

    // if neither of above conditions is true then root1
    // and root2 are not mirror images
    return 0;
}

// Returns true if a tree is symmetric i.e. mirror image of itself
int isSymmetric(struct node* root)
{
    // Check if tre is mirror of itself
    return isMirror(root, root);
}
/* Driver program to test above functions*/
int main()
{
    struct node *root = newNode(1);
    root->left        = newNode(2);
    root->right       = newNode(2);
    root->left->left  = newNode(3);
    root->left->right = newNode(4);
    root->right->left  = newNode(4);
    root->right->right = newNode(3);

    if(isSymmetric(root))
        printf("The tree is symmetric.\n");
    else
        printf("The tree is not symmetric.\n");

    return 0;
}
