#include<iostream>
using namespace std;
void twoOddOccuring(int arr[],int n){
for (int i = 0; i < n; i++)
{
    /* code */
    int count=0;

    for (int j = 0; j < n; j++)
    {
        /* code */
        if (arr[i]==arr[j])
        {
            /* code */
            ++count;
        }
        
    }
    if ((count%2)!=0)
    {
        /* code */
        cout<< arr[i]<<endl;
    }
    
}

}
int main(){
    
    int arr1[]={3,4,3,4,5,4,4,6,7,7};
    int arr2[]={20,15,20,16};
   twoOddOccuring( arr1,10);
    twoOddOccuring( arr2,4);
    return 0;
}