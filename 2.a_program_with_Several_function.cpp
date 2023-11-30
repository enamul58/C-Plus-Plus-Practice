#include<iostream>
using namespace std;

void line();
void message();

int main(){
    cout << "Hello! The program starts in main()." << endl;
    line();
    message();
    line();
    cout << "At the end of main()." << endl;
    return 0;
}

void line(){
    cout << "----------------------------" << endl;
}

void message(){
    cout <<"In function message()."<<endl;
}