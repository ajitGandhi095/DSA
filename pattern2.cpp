//  Square Pattern
// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *

#include<iostream>
using namespace std;

int main() {
    
    for(int row=0; row<5; row+=1) {
        for(int col=0; col<5; col+=1) {
            cout << "* ";
        }
        cout << endl;
    }
}