#include "iostream"
using namespace std;
int mainmenu(){
  int x;
  cout << "choose\n1-grades\n2-square of integer\n3-negative || positive || zero\n";
  cin >>x;
  return x; 
}
string grades(int y){
  if (y>75){
    return "Distinction";
  }else if (y>=60){
    // u said  If the grade is greater than 60 print “Pass” but btw it will give error when enter 60
    return "Pass";

  }else if (y<60){
    return "Fail";
  }
  return 0;
}
int square(int num){
  return num*num;
}
string pORn(int annum){
  if (annum >0){
    return"positive";
    
  }else if (annum < 0){
    return "negative";
  }else {
    return "zero";
  }
  return 0;
}

int main (){
  int mc = mainmenu();
  int num;
  cout << "enter the num: ";
  cin >>num;
  if (mc ==1){
    cout << grades(num);
  }
  if (mc ==2){
    cout << square(num);
  }
  if (mc ==3){
    cout << pORn(num);
  }
  
  return 0;
}

