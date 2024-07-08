#include<bits/stdc++.h>
using namespace std;

//try with 45 & see the different time complexity
// this function takes less time

int Fib(int n) {

    if (n <= 1) {


        return n;
    }
    else {
        int f1 = 0, f2 = 1, f;
        for (int i = 2; i <= n; i++) {

            f = f1 + f2;
            f1 = f2;
            f2 = f;

        }
        return f;
    }
}


// this function taking more time 

int Fib2(int n) {

    if (n <= 1) {
        return n;

    } else {
        return Fib2(n - 1) + Fib2(n - 2);
    }
}

int main() {


    int n;
    cout << "Find nth Fibonacci number: ";
    cin>>n;
    cout<<Fib(n);
    //cout << Fib2(n);
}


