#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int>& arr){
    int i=0;
    int j=arr.size()-1;

while(i<j){
    swap(arr[i],arr[j]);
    i++;
    j--;

}
}
int main(){
    vector<int> arr={12,23,24,76,89};

    reverse(arr);

    for(int x : arr){
         cout<<x<<" ";

    }

}

