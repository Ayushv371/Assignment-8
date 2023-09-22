// Given a vector arr[] sorted in increasing order of n size and an integer x, find 
// the number of unique pairs that exist in the array whose absolute sum is exactly x.

#include<iostream>
#include<vector>
using namespace std;
int main(){

int x;
cout<<"Enter the value of x: ";
cin>>x;

vector<int> arr;

for(int i=0; i<9; i++){
    arr.push_back(i);
}
int size = arr.size();

for(int i=0; i<size; i++){
    for(int j=i+1; j<size; j++){
        if((arr[i]+arr[j])==x){
            cout<<arr[i]<<" "<<arr[j]<<endl;
        }
    }
}

return 0;
}