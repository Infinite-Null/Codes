#include<iostream>
using namespace std;
int main(){
    int a,c=0,i=0;
    cout<<"Enter a number: " ;
    cin>>a;
    add:
    c=c+i;
    i++;
    if(i<=a){
     goto add; 
    }
  cout<<"Factoial of "<<a<<" = "<<c; 
    return 0;
}
