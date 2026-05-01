#include <iostream>
using namespace std;

int main() {
    int a[5]={2,6,7,1,9}, sum=0;

    for(int i=0;i<5;i++)
        if(a[i]>5) sum+=a[i];

    cout<<sum;
}
