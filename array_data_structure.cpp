#include<iostream>
using namespace std;

int main(){
    //memory allocated by stack
    int arr[100];
    int n=10;
    int arr2[n];
    int arr3[]={10,20,30};


    //memory allocated by heap
     int m;
     cin>>m;

    int *arr4= new int [m];
    return 0;
}