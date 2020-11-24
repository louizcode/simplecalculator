#include <iostream>

using namespace std;    
int main() {
        string operation;
                int double1,double2;
    cout << "Let's calculate something , what would you like to do ?" << "\n";
                cin >> operation;
        cout << "Write any 2 numbers" << "\n";
                 cin >> double1;
                        cin >> double2;
    if(operation == "sum"){
            cout << "The result is" << " " <<  (double1+double2) << "\n";
    }
        else if(operation == "divide"){
            cout << "The result is" << " " << (double1/double2) << "\n";
    }
                else if(operation == "subtract"){
                        cout << "The result is" << " " << (double1 - double2) << "\n";
                }
                        else if(operation == "multiply"){
                                cout << "The result is" << " " << (double1 * double2) << "\n";
                        }

}