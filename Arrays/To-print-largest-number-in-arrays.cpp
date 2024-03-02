#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[6] ={ 9, 4, 4, 2, 54, 98};
    int largest_no = arr[0]; // assume the first number is the largest one
    for(int i=1;i<6;i++){
        if(arr[i]>largest_no){
            largest_no = arr[i];
        }
    }
     cout<<largest_no;
     return 0;
}