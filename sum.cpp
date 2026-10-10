#include <iostream>
using namespace std;

int main() {
    int n;
    int sum=0;
    cout << "Enter size of array: ";
    cin >> n;

    int marks[n];   // n input ke baad

    cout << "Enter elements of array: ";

    for (int i = 0; i < n; i++) {
        cin >> marks[i];
        sum+=marks[i];
    }

    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << marks[i] << " ";
    }
    cout<<endl;
    cout<<sum;

    return 0;
}