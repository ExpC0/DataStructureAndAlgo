//stack implementation using char array
#include <bits/stdc++.h>

using namespace std;
#define MAX 50

char A[MAX];
int top = -1;
void push(char data){
    if(top<49){
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
        printf("top: %c\n",A[top]);
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

        cout <<A[i];
    }
    cout<<endl;
}

int main() {
    
    push('a');
    push('b');
    print();
    Top();
    push('c');
    print();
    pop();
    print();
    pop();
    print();
    pop();
    isEmpty();
   

    
    return 0;
}

