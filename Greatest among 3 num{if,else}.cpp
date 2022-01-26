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
  if(a>=b){
  	if(a>=c){
  		cout<<"Frist number "<<a<<" is greatest";
	  }
	else{
	    cout<<"Third number "<<c<<" is greatest";	
	}
  }
  else{
  	if(b>=c){
  		cout<<"Second number "<<b<<" is greatest";
	  }
	else{
		cout<<"Third number "<<c<<" is greatest";
	}  
  }
return 0;
}
