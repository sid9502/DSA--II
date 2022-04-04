#include <stdio.h>
#include <stdlib.h>
#include "bst.h"
int main(){

    bst t;
    printf("hello\n");
    init_bst(&t);
    insert(&t,40);
    insert(&t,30);
    insert(&t,50);
    insert(&t,25);
    insert(&t,35);
    insert(&t,45);
    insert(&t,60);
    insert(&t,15);
    insert(&t,28);
    insert(&t,55);
    insert(&t,70);

    postorder_traversal(t);
    





}