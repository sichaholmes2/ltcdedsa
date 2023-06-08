#include<iostream>
using namespace std;
int sum(int n){
 if (n==0)
 {
    /* code */
    return 0;
 }
 return n+sum(n-1);

}
int main(){
    int n;
    cin>>n;
    cout<<sum(n)<<endl;
    return 0;
}