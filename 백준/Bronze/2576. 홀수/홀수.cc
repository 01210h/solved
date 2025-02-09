#include<iostream>
using namespace std;

int main() {
    int arr[7];
    int sum{0};
    int k,key{0},index;
    for(int i=0;i<7;i++){
        cin>>k;
        if(k%2!=0){
            arr[i]=k;
            sum+=k;
            key++;
            if(key==1) {
                index = arr[i];
            }
            if(i!=0&&index>arr[i]){
                index=arr[i];
            }
        }
    }
    if(key!=0) {
        cout << sum << endl << index;
    }else{
        cout<<"-1";
    }
    return 0;
}