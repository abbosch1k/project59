#include <iostream>
using namespace std;

int main() {
    int a[6]={1,2,2,3,4,4};
    int count=0;

    for(int i=0;i<6;i++) {
        bool seen=false;

        for(int j=0;j<i;j++) {
            if(a[i]==a[j]) {
                seen=true;
                break;
            }
        }

        if(!seen) count++;
    }

    cout<<count;
}
