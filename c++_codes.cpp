Write a program that prompts the user for two integers.
Print each number in the range specified by those two integers.

#include<iostream>
using namespace std;

int main() {
int a, b;

cin>>a>>b;

while (a<= b){
cout<<a<<endl;
++a;
}

return 0;

}

write a program to count how many consecutive
times each distinct value appears in the input:

#include<iostream>
using namespace std;
int main(){
int currVal = 0, val = 0;
if (cin>>currVal)
{
int cnt = 1;
while (cin>>val)
{
if (val == currVal)
++cnt;

else
{
cout<<currVal<<" Occurs "<<cnt<<" times"<<endl;
currVal = val;
cnt = 1;
 }
}

cout <<currVal<<" Occurs "<<cnt<<" times"<<endl;


}


return 0;
}
