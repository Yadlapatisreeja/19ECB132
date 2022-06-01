#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main ()
struct node {
    int data;
    struct node *L;
    struct node *R;
};
struct node* insert( struct node* root, int data ) {
    if(root == NULL) {
        struct node* node = (struct node*)malloc(sizeof(struct node));
        node->data = data;
        node->L = NULL;
        node->R = NULL;
        return node;
    } else {
        struct node* cur;
        if(data <= root->data) {
            cur = insert(root->L, data);
            root->L = cur;
        } else {
            cur = insert(root->R, data);
            root->R= cur;
        }
        return root;
    }
}
void preOrder( struct node *root) {
if (root != NULL) {
        printf("%d ", root->data);
        preOrder(root->L);
        preOrder(root->R);
    }
}
int main() {
    struct node* root = NULL;
    int t;
    int data;
    scanf("%d", &t);
    while(t-- > 0) {
        scanf("%d", &data);
        root = insert(root, data);
    }
    preOrder(root);
    return 0;
}
