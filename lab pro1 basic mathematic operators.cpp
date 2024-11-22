//this program performs basic mathematic operations
#include<iostream>
using namespace std;

int main(){
  //assigning numbers and operations
  int first , second , add , subtract , multiply;
  float divide;
  
  //taking inputs
  cout<<"Please enter two digits :"
  cin>>first;
  cin>>second;
  
  //assigning operation functions
  add=first+second;
  subtract=fist-second;
  multiply=first*second;
  divide=first/(float)second;
  
  //for printing output 
  cout<<endl<<"Sum : "<<add;
  cout<<endl<<"Difference : "<<subtract;
  cout<<endl<<"Multiplicaton : "<<multiply;
  cout<<endl<<"Division : "<<divide
  
  return 0;
  
}

INPUT GIVEN:
2 5

OUTPUT:
Please enter two digits :
Sum : 7
Difference : -3
Multiplicaton : 10
Division : 0.4
