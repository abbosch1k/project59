#include <iostream>
using namespace std;

int main() {
    int a[5]={1,2,2,3,2}, x=2, count=0;

    for(int i=0;i<5;i++)
        if(a[i]==x) count++;

    cout<<count;
}
