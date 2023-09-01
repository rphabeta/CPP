#include <bits/stdc++.h>
using namespace std; 
int main(){
    string a = "love is";
    a += " pain!";
    a.pop_back();
    cout << a << " : " << a.size() << "\n";
    cout << char(* a.begin()) << '\n';
    cout << char(* (a.end() - 1)) << '\n';
    // string& insert (size_t pos, const string& str); 
    a.insert(0, "test ");
    cout << a << " : " << a.size() << "\n";
    // string& erase (size_t pos = 0, size_t len = npos); 
    a.erase(0, 5);
    cout << a << " : " << a.size() << "\n";
    // size_t find (const string& str, size_t pos = 0); 
    auto it = a.find("love");
    if (it != string::npos){
    cout << "포함되어 있다." << '\n'; }
    cout << it << '\n';
    cout << string::npos << '\n';
    // string substr (size_t pos = 0, size_t len = npos) const; 
    cout << a.substr(5, 2) << '\n';
    return 0; 
}
/*
love is pain : 12
l
n
test love is pain : 17
love is pain : 12 
포함되어 있다.
0 18446744073709551615 
is
*/

/*
    +=: 문자열 더할 때, push_back() 메서드는 문자 하나 밖에 더하지 못해서 보통 += 많이 사용.
    begin(): 문자열 첫번째 요소를 가리키는 이터레이터 반환(이 이터레이터를 기반으로 *를 통해 해당 위치 값 가져옴)
    end(): 문자열 마지막 요소를 가리키는 이터레이터 반환
    size(): 문자열 사이즈 반환
    insert(위치, 문자열): 특정위치에 문자열 삽입
    erase(위치, 크기): 특정 크기 만큼 문자열 지움
    pop_back(): 문자열 끝을 지움
    find(문자열): 특정 문자열 찾아 위치 반환(만약 해당 문자열을 못 찾는 경우 string::npos를 반환)
    substr(위치, 크기): 특정 위치에서 크기만큼의 문자열을 추출
*/
