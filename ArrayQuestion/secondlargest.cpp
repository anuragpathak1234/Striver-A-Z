#include <iostream>
#include <vector>
#include <math.h>

using namespace std;


void secondLargest(vector<int> arr){

  int max = INT_MIN;
  int second_max = INT_MIN;

  for(int i  = 0; i < arr.size(); i++){
    if(arr[i] > max){
      max = arr[i];
    }
  }

  for(int i  = 0; i < arr.size(); i++){
    if(arr[i] != max && arr[i] > second_max){
      second_max = arr[i];
    }
  }

  cout<<second_max;

  
}


int main(){

  vector<int> arr = {2,3,5,8,5,9};

  secondLargest(arr);
}