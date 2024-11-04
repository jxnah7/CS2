#include <iostream>
using namespace std;



// define a function that has inputs an array of integers
// SIZE of the array
// starting index 
// sum of all numbers in the array from the starting index



int skibidi(int arr[], int size, int start){
  int sum = 0;
  for (int i = start; i < size; i++){
    sum += arr[i];
  }
  return sum;
}



int main(){
  const int SIZE = 4;
  int arr[10];
  for (int i = 0; i < 10; i++){
    arr[i] = rand() % 10;
    cout << arr[i] << " ";
  }
  cout << skibidi(arr, SIZE, 0) << endl;
  cout << recurArr(arr, SIZE, 0) << endl;
}



int recurArr (int arr[], int size, int start){
  //BASE CASE
  if (size <= 0){
    return 0;
  }
  else if (start >= size){
    return 0;
  }
  //RECURSIVE CASE
  return arr[start] + recurArr(arr, size, start+1);

  // for decreasing size...
  // return arr[size - 1] + recurArr(arr, size-1, start);

}