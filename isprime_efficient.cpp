#include<iostream>
using namespace std;
bool isPrime(int n){
if (n==1 ||n==0)
{
    /* code */
    return false;
}
if (n%2==0 || n%3==0)
{
    /* code */
    return false;
}

for (int i = 5; i*i <= n; i=i+6)
{
    /* code */
    if (n%i==0||n%(i+2)==0)
    {
        /* code */
        return false;
    }
    
}
return true;

}
int main(){
    int n;
    cin>>n;
    if (isPrime(n))
    {
        /* code */
        cout<<"true"<<endl;
    }
    else{
         cout<<"false"<<endl;
    }
    
    return 0;
}