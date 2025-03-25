#include<iostream>
using namespace std;


int main(){
    int width,height;
    cin>>width>>height;
    if(width%3==0||height%3==0){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
}
