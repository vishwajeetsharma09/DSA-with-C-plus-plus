#include<bits/stdc++.h>4
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum = 0;
    for(int i=1;i<=n;i++){
        // sum += i;
        sum = sum + i;
    }
    cout<<sum<<endl;
    return 0;
}