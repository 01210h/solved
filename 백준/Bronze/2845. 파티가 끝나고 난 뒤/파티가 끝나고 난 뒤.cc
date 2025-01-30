#include<iostream>
using namespace std;
int main() {
   int L,P;
   int a,b,c,d,e;
   cin>>L>>P;
   cin>>a>>b>>c>>d>>e;
   int ans=L*P;
   cout<<a-ans<<" "<<b-ans<<" "<<c-ans<<" "<<d-ans<<" "<<e-ans;

   return 0;
}