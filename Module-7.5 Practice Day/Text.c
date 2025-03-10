#include<stdio.h>
using namespace std;

int main() {
    int n; // সাইজ নেওয়া হবে
    cin >> n;
    
    long long int sum = 0;
    for (int i = 0; i < n; i++) {
        long long int value;
        cin >> value;
        sum += value;
    }
    
    if (sum < 0) {
        sum *= -1;
    }
    
    cout << sum << endl;
    
    return 0;
}
