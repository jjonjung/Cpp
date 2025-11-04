#include <iostream>
using namespace std;

int main() {
    int T; 
    cin >> T;

    while (T--) {
        int C; 
        cin >> C;

        int Q = C / 25;  
        C %= 25;

        int dime = C / 10;     
        C %= 10;

        int ni = C / 5;    
        C %= 5;

        int p = C;         

        cout << Q << " " << dime << " " << ni << " " << p << '\n';
    }

    return 0;
}
