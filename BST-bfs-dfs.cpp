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



void breadth_first_traverse(node* rt){
    
    if(rt == NULL)
    {
        return;
    }
    
    node* cur = rt;
    queue<node*>q;
    q.push(cur);
    
    while(!q.empty()){
      
        cout<<cur->data<<" ";
        
        if(cur->left != NULL)
        q.push(cur->left);
        
        if(cur->right != NULL)
        q.push(cur->right);
        
        q.pop();
        cur = q.front();
          
    }
    
    cout<<endl;
}

//depth first traversal

void Preorder(node *rt){
    
    if(rt == NULL)
        return;
    
    printf("%d ",rt->data);
    Preorder(rt->left);
    Preorder(rt->right);
}

void Inorder(node *rt){
    
    if(rt == NULL)
        return;
    
    Inorder(rt->left);
    printf("%d ",rt->data);
    Inorder(rt->right);
}


void Postorder(node *rt){
    
    if(rt == NULL)
        return;
    
    
    Postorder(rt->left);
    Postorder(rt->right);
    printf("%d ",rt->data);
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

    cout<<"breadth first traversing: ";
    breadth_first_traverse(root);
    cout<<endl;
    
    cout<<"Pre-order traversal : ";
    Preorder(root);  
    cout<<endl;
    
    cout<<"In-order traversal : ";
    Inorder(root);
    cout<<endl;
    
    cout<<"Post-order traversal : ";
    Postorder(root);
    



}


