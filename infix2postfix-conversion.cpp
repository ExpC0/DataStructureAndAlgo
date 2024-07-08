#include<bits/stdc++.h> //without checking same precedence*
#include<stack>

using namespace std;

stack<char> s;

bool isoperand(char ch) {


    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
        return true;

    else
        return false;
}

bool isoperator(char ch) {


    if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^')
        return true;
    else
        return false;
}

int precedence(char op) {
    
    if (op == '+' || op == '-')
        return 1;
    else if (op == '*' || op == '/')
        return 2;
    else if (op == '^')
        return 3;
}


string Infix2Postfix(string ex)
{
    
    
    string result="";
    
    for(int i=0;i<ex.size();i++)
    {
        if(isoperand(ex[i]))
            result+=ex[i];
        
        else if(s.empty()||ex[i]=='(')
            s.push(ex[i]);
        
        else if(isoperator(ex[i])){
            
            if(s.empty() || s.top()=='(')
                s.push(ex[i]);
            
            else if(s.empty() || precedence(s.top())<precedence(ex[i]))
                s.push(ex[i]);
            
            else if(precedence(s.top())>=precedence(ex[i]))
            {
                while(!s.empty() && s.top() != '(')
                {
                    result+=s.top();
                    s.pop();
                }
                
                s.push(ex[i]);
            }
        }
        else if (ex[i] == ')') {
            while ( s.top() != '(') {
                result += s.top();
                s.pop();
            }
            s.pop();
        }

    }

    while (!s.empty()) {
        result += s.top();
        s.pop();
    }
    
    return result;
}


int main(){
    
    
    
    string ex;
    getline(cin,ex);
    cout<<Infix2Postfix(ex);
}








