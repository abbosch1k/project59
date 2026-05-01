#include <iostream>
using namespace std;

int main() {
    int x,count=0;
    cin >> x;

    for(int i=1;i<=20;i++)
        if(i%x==0) count++;

    cout<<count;
}
