// Given a vector arr[] sorted in increasing order of n size and an integer x, 
// find if there exists a pair in the array whose absolute difference is exactly x.

#include<iostream>
#include<vector>
using namespace std;
int main(){

vector<int> arr;

for(int i=0; i<7; i++){
    arr.push_back(i);
}

int x;
cout<<"Enter the value of x: ";
cin>>x;

int size = arr.size();

for(int i=0; i<size; i++){
    for(int j=i+1; j<size; j++){
       if((arr[i]-arr[j])<0 && ((arr[i]-arr[j])*-1)==x){
            cout<<arr[i]<<" "<<arr[j]<<endl;
        }
    }
}

return 0;
}