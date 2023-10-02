#include<iostream>
using namespace std;
int main(){
  int a,b,c;
  cout<<"Enter frist number: ";
  cin>>a;
  cout<<"Enter second number: ";
  cin>>b;
  cout<<"Enter third number: ";
  cin>>c;
  if(a>=b&&a>=c){
  	cout<<"Frist Number "<<a<<" is greatest";
}
 if(b>=a&&b>=c){
  	cout<<"Second Number "<<b<<" is greatest";
}
 if(c>=a&&c>=b){
  	cout<<"Third Number "<<c<<" is greatest";
}
return 0;
}
