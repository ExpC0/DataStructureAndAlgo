#include<bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    node *left;
    node *right;
};

//for creating new node


node* newNode(int x) {

    node *n = new node();
    n->data = x;
    n->left = NULL;
    n->right = NULL;
    return n;

}

//for inserting node

node* Insert(node* rt, int x) {



    if (rt == NULL) {
        rt = newNode(x);

    } else if (rt->data > x) {
        rt->left = Insert(rt->left, x);
    } else if (rt->data < x) {
        rt->right = Insert(rt->right, x);
    }
    return rt;
}

//search element

bool Search(node* rt, int x) {

    if (rt == NULL)
        return false;
    else if (rt->data == x)
        return true;
    else if (rt->data >  x)
        return Search(rt->left, x);
    else if (rt->data < x)
        return Search(rt->right, x);

}

//find max element

int find_max(node* rt) {

    if (rt->right == NULL)
        return rt->data;
    else
        return find_max(rt->right);
}

//find minimum element

int find_min(node* rt) {

    if (rt->left == NULL)
        return rt->data;
    else
        return find_min(rt->left);
}

//find height or  highest depth

int find_height(node* rt){
    
    if(rt == NULL)
        return -1;
    int a,b;
    a = find_height(rt->left);
    b = find_height(rt->right);
    return max(a,b)+1;
}


int main() {

    node* root = NULL;

    root = Insert(root, 17);
    Insert(root, 15);
    Insert(root, 9);
    Insert(root, 11);
    Insert(root, 14);
    Insert(root, 3);

    cout << "search item : ";
    int a;
    cin>>a;
    if (Search(root, a) == true)
        cout << "Found" << endl;

    else
        cout << "NOT Found" << endl;


    //find max element

    cout << "Max element: " << find_max(root) << endl;
    cout << "Min element: " << find_min(root) << endl;

    //find height
            
    cout<<"Height: "<<find_height(root);



}


