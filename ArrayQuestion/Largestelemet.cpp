#include <iostream>

#include <vector>

using namespace std;

vector<int> merge(vector<int> first,vector<int> second);
vector<int> MergeSort(vector<int> arr){
    
  if(arr.size() == 1){
    return arr;
  }

  int mid = arr.size() / 2;

  vector<int> left (arr.begin(),arr.begin() +mid);
  vector<int> right(arr.begin() + mid, arr.end());

  left = MergeSort(left);
  right = MergeSort(right);
  return merge(left,right);
}

vector<int> merge(vector<int> first,vector<int> second){

  vector<int> mix(first.size() + second.size());

  int i  = 0;
  int j = 0;
  int k = 0;

  while(i < first.size() && j < second.size()){
    if(first[i] < second[j]){
      mix[k] = first[i];
      i++;
    }

    else{
      mix[k] = second[j];
      j++;
    }

    k++;
  }

  while(i < first.size()){
    mix[k] = first[i];
    i++;
    k++;
  }

  while(j < second.size()){
    mix[k] = second[j];
    j++;
    k++;

  }

  return mix;
}

int main(){

  vector<int> arr = {6,4,2,3,1,5};

  arr = MergeSort(arr);

  for(int num : arr){
    cout<<num<<" ";
  }

  cout<<endl;
  cout<<arr[arr.size() - 1];

}