#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    int totalSum = 0;
    for (int i = 1; i <= n; ++i) {
        totalSum += i;
    }

    cout << "The total sum from 1 to " << n << " is: " << totalSum << endl;
    return 0;
}