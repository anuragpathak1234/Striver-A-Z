#include <iostream>

#include <vector>
using namespace std;

void allzeroatfront(vector<int> arr){

  vector<int> temp(arr.size(),0);
  int index = 0;

  for(int i = 0; i < arr.size(); i++){
    if(arr[i] == 0){
      temp[index] = 0;
      index++;
    }
  }

  for(int i = 0; i< arr.size(); i++){
    if(arr[i] != 0){
      temp[index] = arr[i];
      index++;
    }
  }

  for(int num : temp){
    cout<<num<<" ";
  }
  
}

int main(){

  vector<int> arr =  {1,0,3,0,5,0};

  allzeroatfront(arr);
}