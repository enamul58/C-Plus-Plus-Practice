#include<iostream>
#include<climits>
using namespace std;

int main(){
    cout << "Range of types int and unsigned int" << endl << endl;
    cout << "Type   Minimum     Maximum"
        << endl
        << "------------------------"
        << endl;
    cout << "int            " << INT_MIN << "    "
                            << INT_MAX << endl;
    cout << "Unsigned int   " << "    0    "
                                << UINT_MAX << endl;
return 0;
}
