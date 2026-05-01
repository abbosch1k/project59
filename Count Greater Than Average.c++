#include <iostream>
using namespace std;

int main() {
    int a[4]={2,4,6,8}, sum=0;

    for(int i=0;i<4;i++)
        sum+=a[i];

    int avg=sum/4, count=0;

    for(int i=0;i<4;i++)
        if(a[i]>avg) count++;

    cout<<count;
}
