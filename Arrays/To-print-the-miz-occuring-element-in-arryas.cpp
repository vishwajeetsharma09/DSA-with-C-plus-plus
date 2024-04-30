#include<iostream>
using namespace std;
int main(){
    int arr[10] = { 5, 3, 8, 2, 7, 4,3,8,2,7 };
    for(int i=0;i<9;i++){
        for(int j=0;j<=9;j++){
            if(i==j){
                continue;
            }
            if(arr[i]==arr[j]){
                break;
            }
        }
    }
    return 0;
}