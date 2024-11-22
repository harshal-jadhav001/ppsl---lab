//this program checks if the number is between 10 and 20
#include <iostream>
using namespace std;

int main() 
{
    int num;
    cout<<"enter a number"<<endl;
    cin>>num;
    
    if(num>=10 && num<=20){
      cout<<"The number "<<num<<" is between 10 & 20.\n";
    }
    else{
      cout<<"the number "<<num<<" is not between 10 & 20.\n";
    }
    
    return 0;
}

INPUT:
7

OUTPUT:
enter a number:7
the number 7 is not between 10 & 20.
