#include <bits/stdc++.h>
using namespace std;
vector<string> split(string input, string delimiter) {
    vector<string> ret;
    long long pos = 0;
    string token = "";
    // ----------- split의 핵심 부분 -----------
    while ((pos = input.find(delimiter)) != string::npos) {
        token = input.substr(0, pos);
        ret.push_back(token);
        input.erase(0, pos + delimiter.length());
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
