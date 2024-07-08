//mergeSort_algorithm

#include<bits/stdc++.h>
using namespace std;

void merge(int *arr, int *left, int l, int *right, int r) {

    int i = 0, j = 0, k = 0;

    while (i < l && j < r) {

        if (left[i] < right[j]) {
            arr[k] = left[i];
            i++;
            k++;
        } else {
            arr[k] = right[j];
            j++;
            k++;

        }
    }

    while (i < l) {

        arr[k] = left[i];
        i++;
        k++;
    }
    while (j < r) {
        arr[k] = right[j];
        j++;
        k++;
    }



}

void mergeSort(int *arr, int n) {

    int mid;
    mid = n / 2;
    int left[mid], right[n - mid];
    
    if(n<2){
        return ;
    }

    for (int i = 0; i < mid; i++) {
        left[i] = arr[i];
    }
    for (int j = mid; j < n; j++) {
        right[j-mid] = arr[j];
    }
    mergeSort(left, mid);
    mergeSort(right, n - mid);
    merge(arr, left, mid, right, n - mid);
}

int main() {


    int arr[12] = {3, 4, 5, 1, 8, 10, 5, 11, 0, 11, 6, 9};
    mergeSort(arr, 12);



    for (int i = 0; i < 12; i++) {
        cout << arr[i] << " ";
    }

}



/*
#include<bits/stdc++.h>
using namespace std;
void Merge( int arr[], int low, int high, int mid);
void MergeSort( int arr[], int low, int high)
{

if ( low<high){
int mid =  (high+low)/2;

MergeSort(arr,low,mid);
MergeSort(arr,mid+1,high);
Merge(arr,low,high,mid);

}

}

void Merge(int arr[], int low, int high, int mid)
{

int i = low, j = mid+1, k=0, temp[high-low+1];

while ( i <= mid && j <= high)
{

if(arr[i]<arr[j])
{

temp[k] =  arr[i];
i++;

}
else{

temp[k] = arr[j];
j++;

}
k++;

}


while ( i<=mid)
{

temp[k] = arr[i];
i++;
k++;
}

while( j<= high)
{
temp[k]= arr[j];
j++;
k++;

}

for ( int l = low; l<=high; l++)
{
arr[l] = temp[l-low];

}
}




int main(){


int arr[7] = {2,34,234,0,2345,4,5};
MergeSort(arr,0,6);
for ( int i = 0; i<=6; i++)
cout<<arr[i]<<endl;

}

*/


