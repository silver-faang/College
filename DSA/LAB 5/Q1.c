#include <stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *left,*right; 
};
struct node* nwn(int v)
{
    struct node* temp;
    temp=(struct node *) malloc(sizeof(struct node));
    temp->data = v;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

void inodr(struct node*t){
    if(t!=NULL)
    {
        inodr(t->left);
        printf("%d ",t->data);

        inodr(t->right);
    }
}   
void ptdr(struct node*t) 
{
    if(t!=NULL){
        ptdr(t->left);
        ptdr(t->right);
        printf("%d ",t->data);
    }
}
void prdr(struct node*t){
    if(t!=NULL){
        printf("%d ",t->data);
        prdr(t->left);
        prdr(t->right);
    }
}
int nn(struct node *t){
    if(t==NULL)
     return (1 + nn(t->left) + nn(t->right)) ;
    else
     return 0; 
}
int nln(struct node *t){
    if(t==NULL)
     return 0;
    if((t->left=NULL) && (t->right))
     return 1;
    else 
     return (nln(t->left)+nln(t->right));  
}    

int main() {
  struct node *h;
  int n,n1,n2,n3,n4;   
  printf("Enter the value \n");
  scanf("%d",n);
  h=nwn(n);
  printf("Enter the next value \n");
  scanf("%d",n1);
  h->left=nwn(n1);
  printf("Enter the next value \n");
  printf("here");
  scanf("%d",n2);
  printf("here");
  h->right=nwn(n2);
  printf("Enter the next value \n");
  scanf("%d",n3);
  h->left->left=nwn(n3);
  printf("Enter the next value \n");
  scanf("%d",n4);
  h->left->right=nwn(n4);
  printf("\nPREORDER TRAVERSAL of binary tree is \n");
  prdr(h);
  printf ("\n");
  printf("\nINORDER TRAVERSAL of binary tree is \n");
  inodr(h); 
  printf ("\n");
  printf("\nPOSTORDER TRAVERSAL of binary tree is \n");
  ptdr(h);
  printf ("\n");
  printf("\nNo of nodes are:%d \n",nn(h));
  printf("\nNo of leaf nodes are:%d \n",nln(h));
  printf("\nNo of non leaf nodes are:%d \n",(nn(h)-nln(h)));
  printf(" the height of binary tree is 2");
  return 0;
}