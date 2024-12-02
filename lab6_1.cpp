#include <iostream>
using namespace std;

int main() {
    int integer[100]; 
    int i = 0;
    int x = -1; 

   
    while (x != 0) {
        cout << "Enter an integer: ";
        cin >> x;

        if (x != 0) {
            integer[i] = x;
            i++;
        }
    }

    int even = 0, odd = 0;
    for (int j = 0; j < i; j++) {
        if (integer[j] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    cout << "#Even numbers = " << even << endl;
    cout << "#Odd numbers = " << odd << endl;

    return 0;
}
