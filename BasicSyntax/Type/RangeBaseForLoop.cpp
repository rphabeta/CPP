#include<bits/stdc++.h>
using namespace std; 
int main(){
    vector<int> a = {1, 2, 3};
    for(int b : a) cout << b << "\n"; // 1
    for(int i = 0; i < a.size(); i++) cout << a[i] << "\n"; // 2 
    return 0;
}
/* 
1 
2 
3 
1 
2 
3 
*/

/*
범위 기반 for 루프
for({타입} {임시변수명} : {타입을 담는 컨테이너})
*/
