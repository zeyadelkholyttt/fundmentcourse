#include "iostream"
using namespace std;
int main (int argc, char *argv[]) {
  int num1, num2;
  char op;
  while(true){
    cout << "enter first num \n";
    cin >> num1;
    cout << "enter second \n";
    cin >> num2;
    cout << "enter operation (+, -, *, /) or stop\n";
    cin >> op;
    if (op == '+'){
      cout << "result " << num1 + num2 ;

    }
    if (op == '/'){
      cout << "result " << num1 / num2 ;

    }
    if (op == '*'){
      cout << "result " << num1 * num2 ;

    }
    if (op == '-'){
      cout << "result " << num1 - num2 ;

    }
  }
    return 0;
}
