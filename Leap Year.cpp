#include<iostream>
using namespace std;
int main(){
  int a;
  cout<<"Enter the Year: ";
  cin>>a;
 if(a%4==0){
    if(a%100==0){
    	if(a%400==0){
    		cout<<"The year "<<a<<" is a leap year";
		}
		else{
			cout<<"The year "<<a<<" is not a leap year";
		}
	}
	else{
	   	cout<<"The year "<<a<<" is a leap year";
	}
}
 else{
     cout<<"The year "<<a<<" is not a leap year";	
}
return 0;
}
