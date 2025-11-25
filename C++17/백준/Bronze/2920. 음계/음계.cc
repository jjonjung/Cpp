#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v(8);
    for (int i = 0; i < 8; i++) {
        cin >> v[i];
    }

    bool asc = true, desc = true;

    for (int i = 0; i < 7; i++) {
        if (v[i] != i + 1) asc = false;        
        if (v[i] != 8 - i) desc = false;      
    }

    if (asc) cout << "ascending\n";
    else if (desc) cout << "descending\n";
    else cout << "mixed\n";

    return 0;
}
