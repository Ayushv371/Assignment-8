// Given a vector arr[] sorted in increasing order. Return an array of squares of each
// number sorted in increasing order. Where size of vector 1<size<101.

#include<iostream>
#include<vector>
using namespace std;
// 1 2 3 4 5 6 7 8 9
// 1 4 9 16 25 36 64 81

inline int square(int n){
    cout<<n*n<<" ";
}

int main(){

vector<int> num;

for(int i=0; i<7; i++){
    num.push_back(i);
}

int size = num.size();

for(int i=0; i<size; i++){
square(num[i]);
}

return 0;
}