#include<iostream>
using namespace std;

int main(){
    bool array[31]={false};
    int arr[28];
    for(int i=0;i<28;i++){
        cin>>arr[i];
        array[arr[i]]=true;
    }
    int result[2], index{0};

    for(int i=0;i<31;i++){
        if(!array[i]&&i!=0){
            result[index]=i;
            index++;
        }
    }
    if (result[0] < result[1]) {
        cout << result[0] << endl << result[1] ;
    } else {
        cout << result[1] << endl << result[0] ;
    }
    return 0;
}
