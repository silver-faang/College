#include<stdio.h>
#include<malloc.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* createNode(int data){
    struct node *n; 
    n = (struct node *) malloc(sizeof(struct node));
    n->data = data; 
    n->left = NULL; 
    n->right = NULL;
    return n;
}
/*void preOrder(struct  node* root){
    if(root!=NULL){
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(struct  node* root){
    if(root!=NULL){
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ", root->data);
    }
}*/

void inOrder(struct  node* root){
    if(root!=NULL){
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

int isBST(struct  node* root){
    static struct node *prev = NULL;
    if(root!=NULL){
        if(!isBST(root->left)){
            return 0;
        }
        if(prev!=NULL && root->data <= prev->data){
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else{
        return 1;
    }
}
struct node * search(struct node* root, int key){
    while(root!=NULL){
        if(key == root->data){
            return root;
        }
        else if(key<root->data){
            root = root->left;
        }
        else{
            root = root->right;
        }
    }
    return NULL;
}
void insert(struct node *root, int key){
   struct node *prev = NULL;
   while(root!=NULL){
       prev = root;
       if(key==root->data){
           printf("Cannot insert %d, already in BST\n", key);
           return;
       }
       else if(key<root->data){
           root = root->left;
       }
       else{
           root = root->right;
       }
   }
   struct node* nw = createNode(key);
   if(key<prev->data){
       prev->left = nw;
   }
   else{
       prev->right = nw;
   }
}

struct node* minValueNode(struct node* node)
{
    struct node* current = node;
    while (current && current->left != NULL)
        current = current->left;
 
    return current;
}
struct node *deleteNode(struct node *root, int value){
    if (root == NULL)
        return root;
    if (value < root->data)
        root->left = deleteNode(root->left, value);
    else if (value> root->data)
        root->right = deleteNode(root->right, value);
       else { 
        if (root->left==NULL and root->right==NULL)
            return NULL;
        else if (root->left == NULL) {
            struct node* temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL) {
            struct node* temp = root->left;
            free(root);
            return temp;
        }
        struct node* temp = minValueNode(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}
void findPreSuc(struct node* root, struct node* pre, struct node* suc, int key)
{
    if (root == NULL)  return ;
    if (root->data == key)
    {
        if (root->left != NULL)
        {
            struct node* tmp = root->left;
            while (tmp->right)
                tmp = tmp->right;
            pre = tmp ;
        }
        if (root->right != NULL)
        {
            struct node * tmp = root->right ;
            while (tmp->left)
                tmp = tmp->left ;
            suc = tmp ;
        }
        return ;
    }
    if (root->data > key)
    {
        suc = root ;
        findPreSuc(root->left, pre, suc, key) ;
    }
    else 
    {
        pre = root ;
        findPreSuc(root->right, pre, suc, key) ;
    }
} 
int main(){
     
    struct node *p = createNode(5);
    struct node *p1 = createNode(3);
    struct node *p2 = createNode(6);
    struct node *p3 = createNode(1);
    struct node *p4 = createNode(4);
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    printf("Inorder traversal :");
    inOrder(p);
    printf("\n");
    insert(p, 16);
    insert(p,12);
    insert(p,20);
    printf("Inorder traversal after insertion :");
    inOrder(p);
    printf("\n");
    printf("Deleting value 6\n");
    p=deleteNode(p,6);
    printf("After Deleting 6:") ;
    inOrder(p);
    printf("11\n");
    printf("Searching for 12\n");
    struct node *t=search(p,12);
    if(t==NULL)
     printf("12 not found\n");
    else
     printf("12 found in the bst\n");  
    struct node *pre=NULL,*suc=NULL;
    printf("Finding predecessor and successor for 3\n");
    findPreSuc(p,pre,suc,3);
     if (pre != NULL)
      printf( "Predecessor is %d \n",pre->data);
    else
      printf("No Predecessor\n");
    if (suc != NULL)
      printf( "Successor is %d \n", suc->data);
    else
     printf("No Successor\n");
  //  printf("%d", p->right->right->data);
    return 0;
}