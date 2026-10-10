#include <iostream>
using namespace std;

int main() {
    int n;
mn
    cout << "Enter size of array: ";
    cin >> n;

    int marks[n];   

    cout << "Enter elements of array: ";

    for (int i = 0; i < n; i++) {
        cin >> marks[i];
    }

    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << marks[i] << " ";
    }

    return 0;
}