//This program checks biggest number from 3
#include <iostream>
using namespace std;

int main() 
{
  int a;
  int b;
  int c;
  cout<<"please enter three integers="<<endl;
  //taking number input
  cin>>a;
  cin>>b;
  cin>>c;
  
  //following code block compares numbers and prints biggest number
  if(a>=b && a>=c){
    cout<<"The greatest integer is="<<a;
  }
  if(b>=a && b>=c){
    cout<<"The greatest integer is="<<b;
  }
  if(c>=a && c>=b){
    cout<<"The greatest integer is="<<c;
  }
  
  return 0;
}




INPUT GIVEN:
4 5 6


  
OUTPUT:
please enter three integers=
The greatest integer is=6
