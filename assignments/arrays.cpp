#include "iostream"
using namespace std;
void freq () {
  int arr[10];
  bool counted[10] = {false};
  cout << "enter 10 elements ";
  for(int i = 0 ; i < 10; i++){
    cin >> arr[i];
  }
  int count =0;
  for (int i =0; i <= 9; i++){
    if (counted[i]){
      continue;
    }
    for (int x =0 ; x<=9; x++){
      if (arr[i]  == arr[x]){
        count++;
        counted[x] = true;

      }
    }
    cout << "the freq of " << arr[i] << " is " << count << endl;
    count =0;
  }
}
void merge(){

  int arr1[5];
  cout << "enter first 5 elements ";
  for(int i = 0 ; i < 5; i++){
    cin >> arr1[i];
  }
  int arr2[5];
  cout << "enter second 5 elements ";
  for(int i = 0 ; i < 5; i++){
    cin >> arr2[i];
  }
  int arr_t[10];
  for (int z= 0; z < 5; z++){
    arr_t[z+5] = arr2[z];
    arr_t[z]= arr1[z];
  }
  for (int x=0; x<10; x++){
    cout << arr_t[x]<< endl;
  }
}
void secondlargest(){
  int arr8[8]= {1,2,7,8,9,6,3,1};
  int largest;
  int second =0;
  for (int i =0; i <8; i++){
    if (arr8[i] > largest){

      second = largest;
      largest = arr8[i];
    }
  }
  cout << second <<endl;
}
int main(){
  secondlargest();
}

