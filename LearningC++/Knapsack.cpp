#include<iostream>
#include <cmath>
using namespace std;

int max(int a, int b) {
    return a > b ? a : b;
}

int Knapsack(int n, int w, int val[], int wt[]) {
    if (n == 0 || w == 0) {
        return 0;
    }
    if (wt[n - 1] > w) {
        return Knapsack(n - 1, w, val, wt);
    }
    else if (wt[n - 1] <= w) {
        return max(val[n - 1] + Knapsack(n - 1, w - wt[n - 1], val, wt), Knapsack(n - 1, w, val, wt));
    }
}

//int main()
//{
//    int tc;
//    int val[] = { 10, 15, 40 };
//    int wt[] = { 1, 2, 3 };
//    cout << Knapsack(3, 6, val, wt) << endl;
//    return 0;
//}