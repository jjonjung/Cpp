#include <iostream>
#include <string>
using namespace std;

int main (){
    int T;
    cin >> T;
    
    while (T--){
        string s; 
        cin >> s;
        cout << s.front() << s.back() << '\n';
    }
    
    return 0;
}