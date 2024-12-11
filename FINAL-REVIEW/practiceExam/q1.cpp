/*
1. Dynamic Arrays
You are given two dynamic arrays of strings, arr1 and arr2, along with their sizes, len1 and len2.
Define a function that will print the values that appear in both arrays (duplicates)
*/

printArr(string arr1[], string arr2[], int len1, int len2){
  for(int i = 0; i < len1; i++){  // traverse each element of arr1
    for(int j = 0; j < len2; j++){  // for each element in arr1, check all of arr2
      if (arr1[i] == arr[j]){ // if its a duplicate
        cout << "duplicate: ";
      }
      cout << arr[i] << " ";
      break;  
    }
  }
}