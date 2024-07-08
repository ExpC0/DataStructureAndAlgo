#include<iostream>
using namespace std;

void ToH(int n,char a,char b,char c){
    
    
    
    if(n>0){
        
    
    ToH(n-1,a,c,b);
    
    cout<<"Move disk from tower "<<a<<" to "<<c<<endl;
    
    ToH(n-1,b,a,c);
    }    
}


int main(){
    
    ToH(4,'a','b','c');
}
