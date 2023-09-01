
#include<bits/stdc++.h>
using namespace std; 
pair<int, int> pi; 
tuple<int, int, int> tl; 
int a, b, c;
int main(){
    pi = {1, 2};
    tl = make_tuple(1, 2, 3);
    tie(a, b) = pi;
    cout << a << " : " << b << "\n";
    tie(a, b, c) = tl;
    cout << a << " : " << b << " : "<< c << "\n"; 
    return 0;
}
// pair, tuple은 기본적으로 타입이나 자료구조는 아니다.
// C++에서 제공하는 utility 라이브러리 헤더의 템플릿 클래스이며, ====> pair<int, int> pi = {1, 2};
// 자주 사용되기에 알아둘 필요가 있다.

// 정리하자면, 
// pair는 first, secon라는 멤버변수를 가지는 클래스이며, 두 가지의 값을 담아야할 떄 사용한다.
// tuple은 세가지 멤버변수를 담을 때 사용하는 클래스이다.

// 주로 두 가지의 값을 담아야할 때 -> pair
// 세 가지 이상의 값을 담아야할 때 -> tuple을 활용한다.
