#include<iostream>
using namespace std;
int main(){
  int a,b,c,d,e,f,g;
  cout<<"Enter the marks of your five subjects: ";
  cin>>a>>b>>c>>d>>e;
  f=(a+b+c+d+e)/5.0;
  g=f/10;
switch(g){
	case 0:
    case 1:
    case 2:
    case 3:
    	cout<<"You have scored F,'Failure is a key to success!'";
    	break;
    case 4:
    case 5:
	    cout<<"You have scored C,'You Need To Study!'";
	    break;
	case 6:
	case 7:
	    cout<<"Ok! You have scored B,'You can Do better!'";	
		break;
	case 8:
	    cout<<"Congrats You have scored A";	
		break;
	case 9:
	case 10:
	     cout<<"Congrats You have scored A+";
		 break;
	default:
	    cout<<"Enter valid input.....";	 		
}
return 0;
}
