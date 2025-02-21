#include<iostream>
using namespace std;

int main(){
    int n,count{0};
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<count;j++){
            cout<<" ";
        }
        for(int j=0;j<2*(n-count)-1;j++){
            cout<<"*";
        }
        count++;
        cout<<endl;
    }
    count=2;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-count;j++){
            cout<<" ";
        }
        for(int j=0;j<2*(count)-1;j++){
            cout<<"*";
        }
        count++;
        if(i!=n-2) {
            cout << endl;
        }
    }

    return 0;
}