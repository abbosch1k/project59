#include <iostream>
using namespace std;

int main() {
    string s="hello";
    char target='l';

    for(char &c:s)
        if(c==target) c='x';

    cout<<s;
}
