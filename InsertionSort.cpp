//insertion-sort
#include<bits/stdc++.h>
using namespace std;

void insertionSort(int *arr, int n) {

    for (int i = 1; i < n; i++) {

        int value = arr[i],indx=i;
        
        for (int j = i-1; j >= 0; j--) {

            if (value < arr[j])
            {  arr[j+1]=arr[j];
            indx--;
            }
        }
        arr[indx]=value;
    }
}



void InsertionSort(int A[],int n){

for ( int i = 1; i<=n-1; i++) // first index value is stable
{
int value = A[i];
int hole = i;

while ( hole > 0 && A[hole-1]>value)
{

A[hole] = A[hole-1];
hole--;

}

A[hole] = value;  // indext 'hole' will be changed to the left there put the value

}

}


int main(){

int a[] = {23,3,354,32,2,1,12354};
InsertionSort(a,7);

for ( int i = 0; i<= 6; i++)
cout << a[i]<<endl;

}

s
