typedef struct node{
    int data;
    struct node* left;
    struct node* right;

}node;
typedef node* bst;

void init_bst(bst* t);
void insert(bst* t ,int val);
void preorder_traversal(bst t);
void inorder_traversal(bst t);
void postorder_traversal(bst t);

