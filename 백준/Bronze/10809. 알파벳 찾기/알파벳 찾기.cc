#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string s;
    cin >> s; 

 
    vector<int> pos(26, -1);

    
    for (int i = 0; i < (int)s.size(); ++i) {
        char c = s[i];               
        int idx = c - 'a';           
        if (pos[idx] == -1) {      
            pos[idx] = i;           
        }
    }

    
    for (int i = 0; i < 26; ++i) {
        cout << pos[i];
        if (i != 25) cout << ' ';  
    }
    
    cout << '\n';

    return 0;
}