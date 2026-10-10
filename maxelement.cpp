#include<iostream>
using namespace std;

int main(){
    int arr[]={5,3,28,8,9};
    int n=sizeof(arr)/4;
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];

    }
}
    cout<<"Max element is "<<max;
    return 0;
}