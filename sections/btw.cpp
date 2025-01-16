#include "iostream"
using namespace std;
int main (){
  int num;
  int n;
  while (true) {
    cin >> n;
    if (n >0){
      num += n;
    }else if (n ==0) {
      break;

    }else{
      continue;
    }
  }
  
  cout << num;
}
