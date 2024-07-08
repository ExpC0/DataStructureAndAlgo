
#include <bits/stdc++.h>

using namespace std;

int knapsack(int *val, int *wt, int n, int W) {
    if (W == 0 || n == 0)
        return 0;
    else if (wt[n - 1] > W)
        return knapsack(val, wt, n - 1, W);

    else {
        return max(val[n - 1] + knapsack(val, wt, n - 1, W - wt[n - 1]), knapsack(val, wt, n - 1, W));

    }
}

int main() {

    int val[] = {60, 100, 120};
    int wt[] = {10, 20, 30};
    int W = 50;
    int n = sizeof (val) / sizeof (val[0]);
    cout << knapsack(val, wt, n, W);

}

//Maximum value obtained by N-1 items and W weight (excluding nth item)
//Value of nth item plus maximum value obtained by N-1 items and W minus the weight of the Nth item (including Nth item)
//If the weight of the ‘Nth’ item is greater than ‘W’, then the Nth item cannot be included and Case 1 is the only possibility.

