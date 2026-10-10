#include<iostream>
using namespace std;

int main(){
    int arr[]={5,3,28,8,9};
    int n=sizeof(arr)/4;
    int min=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<min){
             min=arr[i];



        }
       
    }
    cout<<min;
    return 0;
}