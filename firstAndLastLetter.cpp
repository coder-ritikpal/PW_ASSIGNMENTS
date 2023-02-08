#include <bits/stdc++.h>
using namespace std;
 
int fun(string s, char *first, char *last){
    *first = s[0];
    *last = s[s.size() - 1];
    int cnt = 0;
    for (auto &ch : s){
        if (ch == 't'){
            cnt++;
        }
    }

    return cnt;
}
 
int main()
{
    string s;
    cout<<"Enter letter:";    cin >> s;
    char first, last;
    int count = fun(s, &first, &last);
    cout <<"First letter is:"<< first <<endl<<"Last letter is:"<< last <<endl<<"Count of letter is:"<< count;
    return 0;
}