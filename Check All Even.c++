#include <iostream>
using namespace std;

int main() {
    int a[3]={2,4,6};
    bool ok=true;

    for(int i=0;i<3;i++)
        if(a[i]%2!=0) ok=false;

    cout<<(ok?"Yes":"No");
}
