#include <iostream>
using namespace std;

int main() {
    char c;
    int count=0;

    while(cin>>c) {
        if(isdigit(c)) break;
        count++;
    }

    cout<<count;
}
