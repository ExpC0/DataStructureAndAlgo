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

node* Find(node *rt, int x) {

    while (rt != NULL) {
        if (rt->data == x)
            return rt;

        else if (rt->data > x) {
            rt = rt->left;
        }
        else if (rt->data < x) {
            rt = rt->right;
        }
    }
    
    
}


node* FindMin(node* rt){
    
    while(rt != NULL && rt->left != NULL){
        rt = rt->left;
    }
    
    return rt;
}

node* findInorderSuccessor(node *rt,int data){
    
   
    node *cur = Find(rt,data);
   
    if(cur == NULL)
        return NULL;
    
    //case 1 : having right sub tree
    
    else if(cur->right != NULL )
    {
        node *temp = FindMin(cur->right);
        return temp;
    }
    
    //case 2 :  having no right  sub tree
    
    else if(cur->right == NULL){
        
        
        node *ancestr = rt;
        node *successr = NULL;
        
        while(ancestr  != cur){
            
            if(ancestr->data > data)  // data = cur->data
            {
                successr = ancestr;
                ancestr = ancestr->left;
             }
            else {
                ancestr = ancestr->right;
            }
        }
        return successr;
    }
    
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
    
    
    node* InS = findInorderSuccessor(root,3);
    cout<<InS->data;

}


