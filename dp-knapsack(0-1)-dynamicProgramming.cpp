
#include<bits/stdc++.h>
using namespace std;

int main() {

    int val[] = {1,2,5,6};
    int wt[] = {2,3,4,5};
    int W = 8;

    int n = sizeof (val) / sizeof (val[0]);

    int arr[n + 1][W + 1];

    for (int i = 0; i < n + 1; i++) {
        for (int j = 0; j < W + 1; j++) {
            if (i == 0 || j == 0) {
                arr[i][j] = 0;
            } else if (wt[i-1] <= j) {
                arr[i][j] = max(val[i-1] + arr[i-1][j-wt[i-1]], arr[i - 1][j]);
            } else {
                arr[i][j] = arr[i - 1][j];
            }

            cout << arr[i][j] << " ";
        }
        cout << endl;

    }
    
    cout<<endl;
    
    int value = arr[n][W];
    int j = W;


    for (int i = n; i >= 0 && value >= 0; i--) {
        
        
        
        if(arr[i][j]!=arr[i-1][j])
 
        {
            cout<<val[i-1]<<" ";
            
            value = arr[i][j]-val[i-1];
            
            // after include & subtract fix j's value
            
            while(j>0){
                
                if(arr[i-1][j]==value){
                    break;
                }
                else{
                    --j;
           
                   
                }
            }
          
        }
      
    }
}




//Maximum value obtained by N-1 items and W weight (excluding nth item)
//Value of nth item plus maximum value obtained by N-1 items and W minus the weight of the Nth item (including Nth item)
//If the weight of the ‘Nth’ item is greater than ‘W’, then the Nth item cannot be included and Case 1 is the only possibility.



/*

In a DP[][] table let’s consider all the possible weights from ‘1’ to ‘W’ as the columns and weights that can be kept as rows. 
The state DP[i][j] will denote the maximum value of ‘j-weight’ considering all values from ‘1 to ith’. So if we consider ‘wi’ (weight in ‘ith’ row) we can fill it in all columns which have ‘weight values > wi’. Now two possibilities can take place: 
Fill ‘wi’ in the given column.
Do not fill ‘wi’ in the given column.
Now we have to take a maximum of these two possibilities, formally if we do not fill the ‘ith’ weight in the ‘jth’ column then the DP[i][j] state will be the same as DP[i-1][j] but if we fill the weight, DP[i][j] will be equal to the value of ‘wi’+ value of the column weighing ‘j-wi’ in the previous row. 
So we take the maximum of these two possibilities to fill the current state. 
*/
