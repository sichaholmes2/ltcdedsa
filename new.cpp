#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void solve( ){


string s;
cin>>s;
int t=s.size();


for (int i = 0; i < t; i++)

    /* code */

{
        if(s[i]=='R'){
            cnt_r++;
        }else{
            cnt_g++;
        }
        if(s[i]==s[i+1]){
            pair++;
        }
    }
    if(s[0]==s[t-1]){
        pair++;
    }
    if(cnt_r==cnt_g){
        if(pair>2){
            cout<<"no"<<endl;
        }else{
            cout<<"yes"<<endl;
        }
    }else{
        cout<<"no"<<endl;
    }

}
 int main(){
    int tc;
     cin>>tc;
      while(tc--)
    {  solve();
    }
    return 0;
 }