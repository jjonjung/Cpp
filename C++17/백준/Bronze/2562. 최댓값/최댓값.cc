#include <iostream>
using namespace std;

int main() {
    int maxVal = 0;      
    int index = 0;      
    
    for (int i = 1; i <= 9; ++i) {
        int num;
        cin >> num;
        
        if (num > maxVal) {
            maxVal = num;
            index = i;
        }
    }

    cout << maxVal << endl;
    cout << index << endl;

    return 0;
}
