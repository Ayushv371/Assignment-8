//  Given two vectors arr1[] and arr2[] of size m and n sorted in increasing order. 
//  Merge the two arrays into a single sorted array of size m+n

#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){

int arr1[] = {1,2,3,4}, arr2[] = {9,8,5,6,7};
int m = 4, n = 5;

int sortarray[9];

for(int i=0; i<m; i++){
    sortarray[i]=arr1[i];
}

for(int i=0; i<n; i++, n++){
    sortarray[n-1]=arr2[i];
}

sort(sortarray, sortarray + 9);

for(int i=0; i<9; i++){
    cout<<sortarray[i]<<" ";
}

return 0;
}