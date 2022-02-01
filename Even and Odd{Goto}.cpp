#include<iostream>
using namespace std;
int main(){
   int a;
   cout<<"Enter the number: ";
   cin>>a;
  check:
   if(a%2==0){
     cout<<a<<endl;
   }
  a--;
  if(a!=0){
    goto check;
  }
}
