#include<iostream>
using namespace std;

int main(){
    int n1, n2;
    cout << "input Two Number\n";
    cin >> n1 >> n2;
    char op;
    cout << "input operator\n";
    cin >> op;
    switch(op){
        case '+':
            cout << n1 + n2 << endl;
            break;
        case '-':
            cout << n1 - n2 << endl;
            break;
        case '*':
            cout << n1 * n2 << endl;
            break;
        case '/':
            cout << n1 / n2 << endl;
            break;
        case '%':
            cout << n1 % n2 << endl;
            break;
        default:
            cout << "Plase enter two number & arithmetic operator";
    }
    int a = 0, b, c = 0, d;
    b = a++;
    d = ++c;
    cout << b << " " << d;
    return 0;
}