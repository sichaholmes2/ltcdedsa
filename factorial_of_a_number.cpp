#include<iostream>
using namespace std;
int factotialRec(int n){
    if (n==0)
    {
        /* code */
        return 1;
    }
    return (n*factotialRec(n-1));
}
int factotial(int n){
    //make aloop aprt from n=0 and 1
    int fact=1;
    for (int i = 2; i <= n; i++)
    {
        /* code */
        fact=fact*i;
    }
    
    return fact;
}
int main(){
    int n;
    cin>>n;
    cout<<factotial(n)<<endl;
    cout<<factotialRec(n)<<endl;
    return 0;
}