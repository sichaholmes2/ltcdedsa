#include<iostream>
using namespace std;
void fun(int n){
if (n==0)
{
   return ;
}
fun(n/2);
cout<<(n%2)<<endl;


}
int main(){
    int n;
    cin>>n;
    fun(n);
    return 0;
}