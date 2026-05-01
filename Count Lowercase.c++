#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int c=0;
    for(char ch:s)
        if(islower(ch)) c++;

    cout<<c;
}
