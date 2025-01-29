#include<iostream>
using namespace std;
int main() {
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    int mid;
    if(a>b){
        swap(a,b);
    }//a<b;
    if(c<a){
        mid=a;
    }else if(c>a&&b>c){
        mid=c;
    }else{
        mid=b;
    }
    cout<<mid;
    return 0;
}