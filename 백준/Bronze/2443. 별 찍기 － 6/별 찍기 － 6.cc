#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int k=0;k<n;k++){
        for(int j=k-1;j>=0;j--){
            cout<<" ";
        }
        for(int i=n-k;i>=1;i--){
            cout<<"*";
        }
        for(int t=n-k-1;t>=1;t--){
            cout<<"*";
        }
        if(k!=n-1){
            cout<<endl;
        }
    }
    return 0;
}