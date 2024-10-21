#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1, s2;
    cin >> s1;
    cin >> s2;
    string s = s1 + s2 + '\n';
    cout << s;
    cout << s.length();
    return 0;
}
