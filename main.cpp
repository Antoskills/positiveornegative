#include <iostream>
using namespace std;

class ponoz 
{
  public:
  int num;
  void getdata()
  {
    cout<<"Enter the number :"<< endl;
    cin>>num;
  }
  void putdata()
  {
    if(num>0)
      cout<<"The number is positive"<<endl;
    else if(num<0)
      cout<<"The number is negative"<<endl;
    else
      cout<<"The number is zero"<<endl;
  }

};
int main() 
{
  ponoz p;
  p.getdata();
  p.putdata();
  return 0;
  
  return 0;
}