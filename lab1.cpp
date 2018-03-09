#include<iostream>
using namespace std;

int main(){
    int number;
    cout << "Please enter a number" << endl;
    cin >> number;
    cout << number << "  ";
    while (number != 1) {
        if (number % 2 == 1 ) {
    	    number = 3 * number + 1;
        } else {
    	    number = number / 2;
        }
	cout << number << "  ";
    }
    return 0;

}
