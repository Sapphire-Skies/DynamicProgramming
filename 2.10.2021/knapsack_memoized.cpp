#include <iostream.h>
using namespace std;

int table[1001][1001];

int knapsack(int wt[], int val[], int W, int n) {
  memset(table, -1, sizeof(table));
  if(n==0 || W==0)
    return 0;
  if(table[n][W]!=-1)
    return table[n][W];
  if(wt[n-1] > W)
    return table[n][W] = knapsack(wt, val, W, n-1);
  else
    return table[n][W] = max(table[n-1][W], val[n-1] + table[n-1][W-wt[n-1]]);
}
