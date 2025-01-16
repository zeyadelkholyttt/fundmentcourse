#include "iostream"
#include <string>
int findMax (int x, int y){
  if (x>y){
    return x;
  }else {
    return y;
  }
}
int isEven(int x){
  if (x%2==0){
    return true;
  }else {
    return false;
  }
}
int sumOfDigits(int x){
  
    int sum = 0;

    while (x> 0) {
        sum += x% 10;
        x/= 10;       
    }

    return sum;
}
int main(){
  int x, y, num1, num2;
  std::cout << "Enter two numbers: ";
  std::cin >> x >> y;
  std::cout << "Larger number is : " << findMax(x , y) << "\n";
  std::cout << "Enter a number to check even/odd: ";
  std::cin >> num1;
  std::string oddoreven = (isEven(num1)) ? " is even." : " is odd.";
  std::cout << num1 << oddoreven<< "\n";
  std::cout << "Enter a number to find the sum of its digits: ";
  std::cin >> num2;
  std::cout << "Sum of digits is: " << sumOfDigits(num2);

}
