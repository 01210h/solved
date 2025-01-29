#include<iostream>
using namespace std;
int main() {
    int n;
    int count{0};
    int* arr=new int;
    while(cin>>n){
        if(n==0){
            break;
        }
        (*(arr+count))=n;
        count++;
    }
    for(int i=0;i<count;i++){
        int k=(*(arr+i));
        int result{0};
        for(int j=1;j<=k;j++){
            result+=j;
        }
        cout<<result;
        if((i+1)!=count){
            cout<<endl;
        }
    }
    delete arr;

    return 0;
}