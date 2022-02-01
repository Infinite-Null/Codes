#include<iostream>
using namespace std;
int main(){
    int a,c=0;
    cout<<"Enter a number: ";
    cin>>a;
    loop:
    switch(a){
    case 5:
    		c=c+a;
    		a--;
    case 4:
		    c=c+a;
		    a--;
		case 3:
		    c=c+a;
		    a--;
		case 2:
		    c=c+a;
		    a--;
		case 1:
			c=c+a;
			a--;
		case 0:
		    cout<<"Sum = "<<c;	
		    break;
		default :
		   cout <<"Please Try Again......";
		   goto loop;				
	}
}
