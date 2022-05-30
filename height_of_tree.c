#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
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
            root->L= cur;
        } else {
            cur = insert(root->R, data);
            root->R = cur;
        }
        return root;
    }
}
int getHeight(struct node* root)
{

int counter_R = 0;
int counter_L = 0;   
    if (root == NULL)
    {
        return -1;
    }
         counter_L = getHeight(root->L);
        counter_L++;
         
         counter_R = getHeight(root->R);
         counter_R++; 
         
        if (counter_L > counter_R)
        {
            return counter_L;
        }
              
         return counter_R;     
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
    printf("%d",getHeight(root));
    return 0;
}
