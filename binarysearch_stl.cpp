#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n=5;
    int a[n]={1,4,5,8,9};
    //binary search stl
  bool res1=binary_search(a,a+n,3);
 if (res1)
 {
    /* code */
    cout<<"present"<<endl;
 }
 else{
    cout<<"Not present"<<endl;
 }

 bool res2=binary_search(a,a+n,4);
 if (res2)
 {
    /* code */
    cout<<"present"<<endl;
 }
 else{
    cout<<"Not present"<<endl;
 }

cout<<"LOWER BOUND"<<endl;
 //lower_bound function
 //if element exists then yes else , it points to the next greater element
 n=6;
 int a1[n]={1,4,5,6,9,9};
 int ind= lower_bound(a1,a1+n,4)-a1;
cout<<ind<<endl;
 ind= lower_bound(a1,a1+n,7)-a1;
cout<<ind<<endl;//returns index of 9
 ind= lower_bound(a1,a1+n,10)-a1;
cout<<ind<<endl;// return index of last element+1 

cout<<"UPPER BOUND"<<endl;



//upper bound
// points to the next greater element you are searchig for always

int a2[]={1,4,5,6,9,9};
ind= upper_bound(a2,a2+n,4)-a2;
cout<<ind<<endl;// points to the index of the element just after 4 i.e 5
ind= upper_bound(a2,a2+n,7)-a2;//points to an element greater than 7 i.e 9
cout<<ind<<endl;
ind= upper_bound(a2,a2+n,10)-a2;//points to an element greater than 9 i.e 10
cout<<ind<<endl;
    return 0;
}