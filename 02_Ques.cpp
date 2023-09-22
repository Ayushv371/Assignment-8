//  Given a vector arr[] sorted in increasing order of n size and an integer x, 
//  find if there exists a pair in the array whose sum is exactly x.

// 2 3 4 5 6 7 8

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

vector<int> arr;
for(int i=2; i<9; i++){
    arr.push_back(i);
}

std::sort(arr.begin(), arr.end());

int x;
cout<<"Enter the value of x: ";
cin>>x;

int size = arr.size();

for(int i=0; i<size; i++){
    for(int j=0; j<size; j++){
        if(arr[i]+arr[j]==x){
            cout<<arr[i]<<"+"<<arr[j]<<endl;
        }
    }
}

return 0;
}