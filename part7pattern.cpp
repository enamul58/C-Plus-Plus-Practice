#include<iostream>
using namespace std;

int main(){
    cout << "row col\n";
    //for input
    int row, col;
    cin>>row>>col;
    
    //for
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}