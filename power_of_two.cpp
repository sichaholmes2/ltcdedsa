#include<iostream>
using namespace std;
bool pow2(int n){
  if (n==0)
  {
    return false;
  }
  while (n!=1)
  {
    if (n%2!=0)
    {
        /* code */
        return false;
    }
    n=n/2;

  }
  return true;
  
}
int main(){
    int n;
    cin>>n;
    if (pow2(n))
    {
        /* code */
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    
    return 0;
}