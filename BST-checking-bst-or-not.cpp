#include<bits/stdc++.h>
#include<queue>
using namespace std;


class node {
public:
    int data;
    node *left;
    node *right;
};

node* newNode(int x) {

    node *n = new node();
    n->data = x;
    n->left = NULL;
    n->right = NULL;
    return n;

}

node* Insert(node* rt, int x) {



    if (rt == NULL) {
        rt = newNode(x);

    } else if (rt->data >= x) {
        rt->left = Insert(rt->left, x);
    } else if (rt->data < x) {
        rt->right = Insert(rt->right, x);
    }
    return rt;
}



bool isBinarySearchTree(node *root,node *min, node *max){
    if(root == NULL)
        return true;
    
    else if(min != NULL && min->data >= root->data)
        return false;
    
    else if(max != NULL && max->data<= root->data)
        return false;
    
    bool a = isBinarySearchTree(root->left,min,root);
    bool b = isBinarySearchTree(root->right,root,max);
    
    return a and b;
}



int main() {

    node* root = NULL;

    root = Insert(root, 17);
    Insert(root, 15);
    Insert(root, 9);
    Insert(root, 11);
    Insert(root, 14);
    Insert(root,19);
    Insert(root, 3);
    Insert(root,2);
    Insert(root,10);
    
    //for checking not BST
    //root->left->data = 19;
    //root->left = root->right;

    if(isBinarySearchTree(root,NULL,NULL))
        cout<<"BST"<<endl;
    else
        cout<<"NOT BST"<<endl;



}


