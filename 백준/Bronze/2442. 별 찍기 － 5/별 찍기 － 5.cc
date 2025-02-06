#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=n-i;j>=1;j--){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<"*";
        }
        if(i!=1) {
            for (int t = i-1; t >=1; t--) {
                cout << "*";
            }
        }
        if(i!=n) {
            cout << endl;
        }
    }
    return 0;
}