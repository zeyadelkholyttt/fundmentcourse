#include "iostream"
using namespace std;
int main(){
  int arr[5];
  int x;
  for (int i=0; i <5; i++){
    cout << "enter " << i +1 << " number"<< endl;
    //cin >> x;
    //arr[i] =x;
    cin >> arr[i];
    
  }
  for (int i=0; i <5; i++){
     cout << arr[i] << endl;

  }
  for (int i=0; i <5; i++){
      if ( arr[i] > x){
          x = arr[i];
      }
  }
  cout <<"max is " << x;
  return 0; 
}
