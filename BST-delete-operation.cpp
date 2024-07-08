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


// case 1 of insuccessor when node has right sub tree

node* Insuccessor(node* rt){
   
    while(rt->left != NULL){
        rt = rt->left;
    }
    
    return rt;
}

node* deleteAnode(node *rt,int key){
    
    if(rt==NULL)
    return rt;
    
    else if(rt->data > key)
        rt->left = deleteAnode(rt->left,key);
    
    else if(rt->data < key)
        rt->right = deleteAnode(rt->right,key);
    
    else
    {
        //case 1
        if(rt->left == NULL && rt->right == NULL){
            delete rt;
            rt  = NULL;
        }
        
        //case 2 : having right or left sub tree
        
        else if(rt->left == NULL)
        {
            node *temp = rt;
            rt = rt->right;
            delete temp;
            
        }
        
        else if(rt->right == NULL)
        {
            node *temp = rt;
            rt = rt->left;
            delete temp;
            
        }
        
       // case 3 : having right and left sub tree
        
        else
        {
            
            node *tmp = Insuccessor(rt->right);
            rt->data = tmp->data;
            rt->right = deleteAnode(rt->right,tmp->data);
        }
    }
    return rt;
}

void Inorder(node* rt){
    if(rt==NULL)
        return;
    
    Inorder(rt->left);
    printf("%d ",rt->data);
    Inorder(rt->right);
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
    
    Inorder(root);
    cout<<endl;
    deleteAnode(root,17);
    Inorder(root);
    cout<<endl;
    
   
    
    

}


