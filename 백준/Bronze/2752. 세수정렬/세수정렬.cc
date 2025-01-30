#include<iostream>
using namespace std;
int main() {
   int a,b,c;
   cin>>a>>b>>c;
   if(a>b){
       swap(a,b);
   }//a<b
   if(c<a){//c<a<b
       swap(a,c);//a<
       swap(c,b);
   }else if(c>a&&b>c){//a<c<b
       swap(b,c);
   }
   cout<<a<<" "<<b<<" "<<c;

   return 0;
}