//// if statements
//#include <iostream>
//using namespace std;
//
//int main(){
//    
//    string password = "password";
//    cout << "Enter password: ";
//    
//    string input;
//    cin >> input;
//    
//    if (input == password) {
//        cout << "Correct password\nAccess granted\n" << endl;
//        
//        cout << "1. Add new Record" << endl;
//        cout << "2. Search Record" << endl;
//        cout << "3. Delete Record" << endl;
//        cout << "4. Quit" << endl;
//        cout << "Enter your selection > ";
//        
//        int answer;
//        cin >> answer;
//        
//        switch (answer) {
//            case 1:
//                cout << "Adding new record...\nDone, added new Record" << endl;
//                break;
//            case 2:
//                cout << "Searching record...\nDone, found record" << endl;
//                break;
//            case 3:
//                cout << "Deleting record...\nDone, deleted record" << endl;
//                break;
//            case 4:
//                cout << "Exiting...\nHave a nice day" << endl;
//            default:
//                break;
//        }
//        
//    } else if (input != password) {
//        cout << "Wrong password\nAccess denied" << endl;
//    }
//    
//    return 0;
//    
//}
