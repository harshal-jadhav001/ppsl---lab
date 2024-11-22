//this program checks if the given number is even or ODD

#include <iostream>
using namespace std;

int main(){
  int a;
  cout<<"Enter an integer : "<<endl;
  cin>>a;
  
  //logic
  if(a%2==0){
    cout<<"The Given number is EVEN"<<endl;
  }
  else{
    cout<<"The Given number is ODD"<<endl;
  }
  
  return 0;
}




INPUT GIVEN:
7

OUTPUT:
Enter an integer : 
The Given number is ODD
