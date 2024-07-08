
//post-fix , pre-fix evaluation using stack 

#include <bits/stdc++.h>

using namespace std;

class node {
public:
    int info;
    node* link;
};

node* top = NULL;

void push(int x) {

    node* ptr = new node();
    ptr->info = x;
    ptr->link = top;
    top = ptr;

}

int Top() {
    

    if (top != NULL)
        return top->info;

}

void pop() {

    if (top != NULL) {
        top = top->link;
    } else
        return;
}

bool isOperator(char ch) {

    if (ch == '*' || ch == '/' || ch == '+' || ch == '-')

        return true;
    else
        return false;
}

bool isOperand(char ch) {


    if (ch >= '0' && ch <= '9')
        return true;
    else
        return false;
}

int evaluatePostfix(string exp) {

    int x = 0, flag = 0;
    

    for (int i = 0; i < exp.length(); i++) {



        if (isOperand(exp[i])) {

            flag = 0;

            x = x * 10 + exp[i] - '0';
            


        }
            //flag for not pushing in second space

        else if (exp[i] == ' ' && flag == 0) {
            //cout<<x<<endl;
            push(x);
            flag = 1;
            x = 0;
        }
        else if (isOperator(exp[i])) {
            int op2 = Top();
            pop();
            int op1 = Top();
            pop();
            int r;
            switch (exp[i]) {

                case '*':
                    r = op1*op2;
                    //cout<<"r= "<<r<<endl;
                    push(r);
                    break;
                case '/':
                    r = op1 / op2;
                    //cout<<"r= "<<r<<endl;
                    push(r);
                    break;
                case '+':
                    r = op1 + op2;
                    //cout<<"r= "<<r<<endl;
                    push(r);
                    break;
                case '-':
                    r = op1 - op2;
                    //cout<<"r= "<<r<<endl;
                    push(r);
                    break;
            }
        }
    }
   return top->info;
}

int evaluatePrefix(string ex) {

    int x = 0, flag = 0,digit = 1;

    for (int i = ex.length()-1; i >= 0; i--) {



        if (isOperand(ex[i])) {

            flag = 0;

	if(digit==1)
	{
            x = ex[i] - '0';
            digit++;
	}
	else
	x = x+(ex[i]-'0')*10;
	

        }
            //flag for not pushing in second space

        else if (ex[i] == ' '&& flag == 0) {
            push(x);
            flag = 1;
            x = 0;
            digit = 1;
        }
        else if (isOperator(ex[i])) {
            int op1 = Top();
            pop();
            int op2 = Top();
            pop();
            int r;
            switch (ex[i]) {

                case '*':
                    r = op1*op2;
                    push(r);
                    break;
                case '/':
                    r = op1 / op2;
                    push(r);
                    break;
                case '+':
                    r = op1 + op2;
                    push(r);
                    break;
                case '-':
                    r = op1 - op2;
                    push(r);
                    break;
            }
        }
    }
   return top->info;
}

int main() {


    string exp;
    getline(cin, exp);
  


   int result = evaluatePostfix(exp);
   // int result = evaluatePrefix(exp);
    cout << result;
    

    return 0;
}
