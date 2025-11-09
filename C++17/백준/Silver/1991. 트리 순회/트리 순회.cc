#include <iostream>
using namespace std;

static int n;
static int tree[26][2]; 

void preOrder(int now);
void inOrder(int now);
void postOrder(int now);

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> n;
    
   
    for(int i = 0; i< n; i ++){
     char node_char, left, right;
     cin >> node_char >> left >> right;
     
     int node = node_char - 'A';
     
     // 왼쪽 자식 저장
     if(left == '.') {
         tree[node][0] = -1; // 자식이 없으면 -1
     } else {
         tree[node][0] = left - 'A'; // 문자를 인덱스로 변환하여 저장
     }
     
     // 오른쪽 자식 저장
     if(right == '.') {
         tree[node][1] = -1; // 자식이 없으면 -1
     } else {
         tree[node][1] = right - 'A'; // 문자를 인덱스로 변환하여 저장
     }
    }

    
    preOrder(0);
    cout << "\n";
    inOrder(0);
    cout << "\n";
    postOrder(0);
    cout << "\n";
    
    return 0; 
}


void preOrder(int now){
    if(now == -1) return;
    cout << (char)(now + 'A'); // V (루트)
    preOrder(tree[now][0]);    // L (왼쪽)
    preOrder(tree[now][1]);    // R (오른쪽)
}


void inOrder(int now){
    if(now == -1) return;
    inOrder(tree[now][0]);     // L (왼쪽)
    cout << (char)(now + 'A'); // V (루트)
    inOrder(tree[now][1]);     // R (오른쪽)
}


void postOrder(int now){
    if(now == -1) return;
    postOrder(tree[now][0]);   // L (왼쪽)
    postOrder(tree[now][1]);   // R (오른쪽)
    cout << (char)(now + 'A'); // V (루트)
}
