#include<iostream>
#include<vector>
using namespace std;
//a function that returns vector
/*
 vector <int> fun(vector<int> k){
vector<int> v ;
return v;
 }
*/
 int * fun2(int arr[]){
    int arr[]={10,20,30}; //this gives error as arr is the array and doesnot have the address 
    int *arr2=new int[100];//gibes correct ans as it returns a pointer withaddress
    return arr2;
 }
int main(){
   
    return 0;
}