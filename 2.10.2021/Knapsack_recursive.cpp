#include <iostream.h>
using namespace std;

int knapsack(int wt[], int val[], int W, int n) {
  
  if(n==0 || W==0)
    return 0;
  if(wt[n-1] > W)
    return knapsack(wt, val, W, n-1);
  else
    return max(knapsack(wt, val, W, n-1), val[n-1] + knapsack(wt, val, W-wt[n-1], n-1));
}
