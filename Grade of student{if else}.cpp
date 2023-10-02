#include<iostream>
using namespace std;
int main(){
  int a,b,c,d,e;
  float f;
  cout<<"Enter the marks of your five subjects: ";
  cin>>a>>b>>c>>d>>e;
  f=(a+b+c+d+e)/5.0;
  if(f>=90){
  	cout<<"Congrats You have scored A+";
  }
  else if(f<=89&&f>=80){
  	cout<<"Congrats You have scored A";
  }
  else if(f<=79&&f>=60){
  	cout<<"Ok! You have scored B,'You can Do better!'";
  }
  else if(f<=59&&f>=40){
  	cout<<"You have scored C,'You Need To Study!'";
  }
  else if(f<=49){
  	cout<<"You have scored F,'Failure is a key to success!'";
  }
  else {
  	cout<<"Please enter valid input.......";
  }
return 0;
}
