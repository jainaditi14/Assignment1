#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    double sum = accumulate(arr.begin(), arr.end(), 0);
    double average = sum / n;

    cout << "The average is: " << average << endl;

    return 0;
}
