//time complexities O(n^2)
 #include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b){
int temp;
temp = *a;
*a = *b;
*b = temp;



}

void BubbleSort(int A[],int n){
for (int i = 1; i<=n-1;i++)
for (int j=0; j<=n-i-1; j++)
{
if (A[j]>A[j+1])
swap(A[j],A[j+1]);
}
}

int main(){

int a[] = {23,3,354,32,2,1,12354};
BubbleSort(a,7);

for ( int i = 0; i<= 6; i++)
cout << a[i]<<endl;

}


/* reducing time complexities ..O(n)
#include<bits/stdc++.h>
using namespace std;


void BubbleSort(int A[],int n){

for (int i = 1; i<=n-1;i++)
{
int flag = 0;
for (int j=0; j<=n-i-1; j++)
{
if (A[j]>A[j+1])
swap(A[j],A[j+1]);
flag = 1;
}
if ( flag == 0)
break;
}
}

int main(){

int a[] = {23,3,354,32,2,1,12354};
BubbleSort(a,7);

for ( int i = 0; i<= 6; i++)
cout << a[i]<<endl;

}
*/

