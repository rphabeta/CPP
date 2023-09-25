# include <bits/stdc++.h>
using namespace std;

vector<string> split(string input, string delimiter){
    vector<string> ret;
    long long pos = 0;
    string token = "";

    while((pos = input.find(delimiter)) != string::npos){ // input에서 delimiter를 찾고, 못 찾을 때까지는 이 루프는 반복
    token = input.substr(0, pos);                         // 찾았다면 해당 pos까지 해당 부분 문자열을 추출
    ret.push_back(token);                                 // 추출한 문자열을 ret이라는 배열에 넣음.
    input.erase(0, pos + delimiter.length());             // 그리고 앞에서부터 문자열 지우기.
    }    
}
