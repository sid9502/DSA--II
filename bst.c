#include "bst.h"
#include <stdio.h>
#include <stdlib.h>

int max_height (int a ,int b ){
    if (a>b){
        return a;
    }
    else{
        return b;
    }
}
void init_bst(bst* t){
    *t = NULL;
    return;
}
void insert(bst* t,int val){
    node *nn = (node*)malloc(sizeof(node));
    nn->right = NULL;
    nn->left = NULL;
    nn->data = val;
    if(!nn){
        free(nn);
        return;
    }
    if(*t == NULL){
        *t = nn;
        return;
    }
    node *p,*q=NULL;
    p=*t;
    while(p){
        q=p;
        if(p->data == val){
            free(p);
            return;
        }
        if (p->data<val){
            p=p->right;
        }
        else{
            p=p->left;
        }
    }
    if(q->data<val){
        q->right=nn;
    }
    else{
        q->left=nn;
    }
    return;

}
void preorder_traversal(bst t){

    bst temp=t;
    if (t==NULL){
        return ;
    }
    printf("%d ",temp->data);
    preorder_traversal(temp->left);
    preorder_traversal(temp->right);
}
void inorder_traversal (bst t){
    bst temp=t;
    if(t->left==NULL){
        printf("%d ",t->data);
        return;
    }
    inorder_traversal(t->left);
    printf("%d ",t->data);
    inorder_traversal(t->right);

}
void postorder_traversal(bst t){
    if (t){

    bst temp=t;
    if (temp->left == NULL){
        printf("%d ",temp->data);
        return ;
    }
    postorder_traversal(t->left);
    postorder_traversal(temp->right);
    printf("%d ",temp->data);
    }
    
    
}
int bst_height(bst t){
    if (t==NULL){
        return -1;
    }
    int height;
    height=max_height(bst_height(t->left),bst_height(t->right))+1;
    return height;
}

int bst_depth(bst t,int val,int l){
    if (t==NULL){
        return -1;
    }
    if (t->data==val){
        return l;

    }
    bst_depth(t->left,val,l+1);
    bst_right(t->right,val,l+1);
    return -1;

}
int depth_node(bst t,int val){
    return depth_node( t,val,0);
}