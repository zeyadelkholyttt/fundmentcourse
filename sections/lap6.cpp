#include "iostream"
using namespace std;
int main (int argc, char *argv[]) {
  int n;
  cin >> n;
  int arr[n];
  cout << "enter"<< n << "elements ";
  for(int i = 0 ; i < n; i++){
    cin >> arr[i];
  }
  cout << "revesrse array is \n";
  for (int i=n-1; i >= 0; i--){
    cout << arr[i] << "\n";

  }
  int sum = 0;
  for (int y =0; y < n; y++){
    sum += arr[y];
  }
  cout << "Sum of array emlements is : " << sum << endl;
  int odds = 0, evens = 0;
  for (int z= 0; z < n; z++){
    if (arr[z] % 2 == 0){
      evens++;
    }else if ( arr[z] % 2 != 0) {

      odds++;
    }
  }
  cout << "even numbers: " << evens << endl;
  cout << "odds nums: " << odds << endl;  

  return 0;
}

