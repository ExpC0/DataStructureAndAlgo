//stack implementation using array
#include <bits/stdc++.h>

using namespace std;
#define MAX 10

int A[MAX];
int top = -1;
void push(int data){
    if(top<9){
        top++;
        A[top]=data;
        
    }
    else {
        printf("Stack Overflowing");
    }

}

void pop(){
    
    if(top>-1){
        top--;
    }
    else{
        cout<<"stack is empty";
    }
}

void Top(){
    if(top>-1){
        printf("top: %d\n",A[top]);
    }
    else{
    cout<<"stack is empty";
    }
}

void isEmpty(){
    
    if(top=-1)
    {
        printf("Stack is empty");
    }
}

void print() {
    cout << "Stack: " << endl;
    for (int i = top; i >= 0; i--) {

        cout <<A[i]<< endl;
    }
}

int main() {
    
    push(3);
    push(2);
    print();
    Top();
    push(1);
    print();
    pop();
    print();
    pop();
    print();
    pop();
    isEmpty();
   

    
    return 0;
}

