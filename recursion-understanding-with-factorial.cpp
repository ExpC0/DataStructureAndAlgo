#include<bits/stdc++.h>
using namespace std;

int Factorial(int n){
    
    cout<<"Calculating F("<<n<<")"<<".."<<endl;
    
    if (n==0)
        return 1;
    else
    {
        
        int f= n*Factorial(n-1);
        cout<<"Done "<<"F("<<n<<") = "<<f<<endl;
        return f;
    }
}

int main(){
    
    
    int n;
    cout<<"find the factorial of : ";
    cin>>n;
    cout<<Factorial(n);
}
