#include "iostream"
using namespace std;
int main(){
  int n;
  cin >> n;
  int arr[n];
  cout << "enter "<< n << " elements ";
  int product =1;
  for(int i = 0 ; i < n; i++){
    cin >> arr[i];
    product *= arr[i];
  }
//  for (int x =0; x <n; x++){
//    product *= arr[x];
//  }
  cout << product;
}
