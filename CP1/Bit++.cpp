#include<iostream>
#include<string>
using namespace std;
 int main()
 {
     int n,x=0;
     string m;
     cin>>n;
     for(int i=0;i<n;i++)
     {
         cin>>m;
         if(m[1]=='+')
         {
             x++;
         }
         else
         {
             x--;
         }
     }
     cout<<x<<endl;
 }
