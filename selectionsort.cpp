#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> &arr) {
    for (int ele : arr) {
        cout << ele << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {5, 4, 3, 6, 2, 1};
    int n = arr.size();

    
    for (int j = 0; j < n - 1; j++) {
        int minIndex = j;
        for (int i = j + 1; i < n; i++) {
            if (arr[i] < arr[minIndex]) {
                minIndex = i;
            }
        }
        swap(arr[j], arr[minIndex]);
    }

    print(arr);
    return 0;
}
