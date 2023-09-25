#include <bits/stdc++.h>
using namespace std;
vector<string> split(string input, string delimiter) {
    vector<string> ret;
    long long pos = 0;
    string token = "";
    // ----------- split의 핵심 부분 -----------
    while ((pos = input.find(delimiter)) != string::npos) {    // input에서 delimiter를 찾고, 못 찾을 때까지는 이 루프는 반복
        token = input.substr(0, pos);                          // 찾았다면 해당 pos까지 해당 부분 문자열을 추출
        ret.push_back(token);                                  // 추출한 문자열을 ret이라는 배열에 넣음.
        input.erase(0, pos + delimiter.length());              // 그리고 앞에서부터 문자열 지우기.
    } 
    // --------------------------------------
    ret.push_back(input); 
    return ret;
}
    int main(){
    string s = "안녕하세요 오늘은 금요일입니다 정말이에요!", d = " "; vector<string> a = split(s, d);
    for(string b : a) cout << b << "\n";
}
/*
안녕하세요 
오늘은 
금요일입니다 
정말이에요! 
*/
