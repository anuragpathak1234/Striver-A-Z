#include <iostream>

using namespace std;

int LinearSearch(vector<int> arr, int target){

    for(int i = 0; i < arr.size(); i++){
            if(arr[i] == target){
                return i;
            }
        }

        return -1;
}

int main(){

vector<int> arr = {5,5,7,2,7};
int target = 7;

cout<<"Target found at index "<<LinearSearch(arr,target);
return 0;
}