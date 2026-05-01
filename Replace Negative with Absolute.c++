#include <iostream>
using namespace std;

int main() {
    int a[3]={-5,3,-2};

    for(int i=0;i<3;i++) {
        if(a[i]<0) a[i]=-a[i];
        cout<<a[i]<<" ";
    }
}
