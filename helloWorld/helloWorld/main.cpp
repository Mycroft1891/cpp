// arrays [] and multidimentional arrays
#include <iostream>
using namespace std;

int main(){
    
    // int array with 3 values
    int intArray[3];
    intArray[0] = 100;
    intArray[1] = 200;
    intArray[2] = 300;
    
    cout << "============" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Array" << i << ": " << intArray[i] << endl;
    }
    
    // double array with 3 values
    double doubleArray[] = {2.3, 2.4, 2.5};
    
    cout << "============" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Double" << i << ": " << doubleArray[i] << endl;
    }
    
    // int array - 2 dimensional
    string stringArray[2][3] = {
        {"Dog", "Cat", "Bird"},
        {"Fish", "Monkey", "Eagel"}
    };
    
    cout << "============" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Array" << i << ": " << stringArray[i][j] << endl;
        }
    }
    
    // print multiples of 1..10
    int array[10][5];
    cout << "=============================" << endl;
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 5; j++) {
            array[i][j] = i*j;
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    
    // use array length in for loop
    cout << sizeof(array) << endl;
    cout << array[0] << endl;
    cout << sizeof(array[0]) << endl;
    
    cout << "=============================" << endl;
    for (int i = 1; i <= sizeof(array)/sizeof(array[0]); i++) {
        cout << "Array" << i << ": ";
        for (int j = 1; j <= 5; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}

