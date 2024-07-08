//reversing string using stack

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
        printf("%c",A[top]);
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

void reverse(char* str,int lenght){
    
    for(int i=0;i<lenght;i++){
        push(str[i]);
    }
    cout<<"reversed string: ";
    for(int i=0;i<lenght;i++){
        Top();
        top--;
    }
}
int main() {
    
    char str[100];
    cout<<"enter string: ";
    scanf("%[^\n]",str);
    
    int length = strlen(str);
    reverse (str,length);
    
    return 0;
}

