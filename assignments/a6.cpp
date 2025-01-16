#include <iostream>
using namespace std;

void modifyValue(int* ptr) {
    *ptr = *ptr * 2;
}

int main() {
    int num = 10;
    
    cout << "Value before modification: " << num << endl;
    
    modifyValue(&num);
    
    cout << "Value after modification: " << num << endl;
    
    return 0;
}
