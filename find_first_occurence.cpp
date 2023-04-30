#include <iostream>
using namespace std;
//first occurence of an element
// if the element does not exist print -1

int main()
{  int n=9;
 int a[]={1,4,4,4,4,9,9,10,11};
 int x=4;
 int ind=lower_bound(a,a+n,x)-a;
 //(ind!=n) so it does not point to an element outside the earray 
 if ((ind!=n) && (a[ind]==x))
 {
    /* code */
    cout<<ind<<endl;
 }
 else{
    cout<<-1<<endl;
 }


  x=2;
  ind=lower_bound(a,a+n,x)-a;
 //(ind!=n) so it does not point to an element outside the earray 
 if ((ind!=n) && (a[ind]==x))
 {
    /* code */
    cout<<ind<<endl;
 }
 else{
    cout<<-1<<endl;
 }


  x=12;
  ind=lower_bound(a,a+n,x)-a;
 //(ind!=n) so it does not point to an element outside the earray 
 if ((ind!=n) && (a[ind]==x))
 {
    /* code */
    cout<<ind<<endl;
 }
 else{
    cout<<-1<<endl;
 }
 

    return 0;
}