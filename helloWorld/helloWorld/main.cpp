// pointer
#include <iostream>
using namespace std;

void changeDouble(double *pDoubleValue){
    cout << "2. Double value (pointer): " << *pDoubleValue << endl;
    *pDoubleValue = 10.0;
    cout << "3. Double value (pointer): " << *pDoubleValue << endl;
}

int main(){
    
    int number = 6;
    // declare pointer
    int* pnumber = &number;
    
    cout << "Number is: " << number << endl;
    cout << "Number pointer Memory is: " << pnumber << endl;
    cout << "Number pointer value is: " << *pnumber << endl;
    
    
    cout << "=========================" << endl;
    
    double doubleValue = 13.5;
    
    cout << "1. Double value (variable): " << doubleValue << endl;
    changeDouble(&doubleValue);
    cout << "4. Double value (variable): " << doubleValue << endl;
}


