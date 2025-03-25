#include<iostream>
using namespace std;

class sys;

class Node{
private:
    int data;
    Node* next;
public:
    Node(int num):data(num),next(nullptr){}
    friend class sys;
};

class sys{
private:
    Node* top_node;
    int N;
    int index;
    int minus;
public:
    sys(int n);
    void push(int X);
    void pop();
    void sum();
};
int main(){
    int n;
    cin>>n;
    sys sta(n);
    sta.sum();
    return 0;
}
sys::sys(int n):N(n),index(0),top_node(nullptr),minus(0){}
void sys::push(int X){
    Node* new_node=new Node(X);
    new_node->next=top_node;//연결시켜줌
    top_node=new_node;
    index++;
}
void sys::pop(){
    Node* erase_node=top_node;
    top_node=top_node->next;//커서를 옮기는 느낌?
    minus=erase_node->data;
    delete erase_node;
    index--;
}
void sys::sum(){
    int n;
    int sum{0};
    for(int i=0;i<N;i++){
        cin>>n;
        if(n!=0) {
            push(n);
            sum+=n;
        }else{
            pop();
            sum-=minus;
        }
    }
    cout<<sum;
}