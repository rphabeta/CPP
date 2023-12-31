#include <bits/stdc++.h>
using namespace std; 
int T;
string s;
int main(){
    cin >> T;
    string bufferflush;
    getline(cin, bufferflush); // 버퍼 비우기!
    for(int i = 0; i < T; i++){ 
        getline(cin, s);
        cout << s << "\n"; 
    } 
    return 0;
}
// cin은 개행과 띄어쓰기 이전까지만 input할 수 있기에, 라인 단위로 받는 것에는 한계가 존재.
// 그러한 한계를 극복하기 위해서, getline을 사용한다.

// 해당 코드는 cin을 통해서 T개의 getline을 입력 받을 것을 설정한다. 이 경우 cin은 개행문자 직전까지 입력을 받게되므로, Keyboard(H/W) 와 Program(S/W)의 중간에 위치한
// buffer에 \n(개행 문자)가 남아있게되는 것이다.
// 이를 제거하기 위해서 getline(cin, bufferflush)의 과정을 거치는 것이다.
