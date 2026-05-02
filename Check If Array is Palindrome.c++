#include <iostream>
using namespace std;

int main() {
    int a[5]={1,2,3,2,1};
    bool ok=true;

    for(int i=0;i<5/2;i++) {
        if(a[i]!=a[5-1-i]) {
            ok=false;
            break;
        }
    }

    cout<<(ok?"Yes":"No");
}
