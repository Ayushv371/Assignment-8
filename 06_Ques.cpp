//  Given a vector array nums, print the count of triplets [nums[i], nums[j], nums[k]] 
//  such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == x. Where 
//  k is an integer given by the user.
//  Note: The solution set must not contain duplicate triplets and 
//  should not have 3 loops.

#include<iostream>
#include<vector>
using namespace std;
int main(){

vector<int> nums;
int x;
cout<<"Enter value of x: ";
cin>>x;

for(int i=0; i<15; i++){
    nums.push_back(i);
}
int size= nums.size();

for(int i=0; i<size; i++){
    for(int j=i+1; j<size; j++){
        for(int k=i+2; k<size; k++){
            if((nums[i] + nums[j] + nums[k]) == x && i!=j && i!=k){
                cout<<nums[i]<<" "<<nums[j]<<" "<<nums[k]<<endl;
            }
        }
    }
}

return 0;
}