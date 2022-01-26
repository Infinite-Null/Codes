#include<iostream>
using namespace std;
int main(){
  int a;
  cout<<"Enter a number: ";
  cin>>a;
  if(a%2==0){
    cout<<"The number " <<a<<" is Even";
    goto End;
}
    cout<<"The number " <<a<<" is Odd"; 
    End:
    return 0;
}
