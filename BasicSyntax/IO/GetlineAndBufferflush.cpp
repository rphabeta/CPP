#include <bits/stdc++.h>
using namespace std; int T;
string s;
int main(){
    cin >> T;
    string bufferflush;
    getline(cin, bufferflush);
    for(int i = 0; i < T; i++){ 
        getline(cin, s);
        cout << s << "\n"; 
    } 
    return 0;
}
// cin으로 입력을 받을 때 개행문자 직전 까지 입력을 받게 되고 이 때문에 중간에 위치한 버퍼에 \n이 남아있게 되는 문제를 해결하기 위해서
// 버퍼의 개행문자를 없애주기 위해 getline(cin, bu erflush)를 해주어야 한다.
