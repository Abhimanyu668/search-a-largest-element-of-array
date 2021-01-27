//finding the largest no of given array of n size 
#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
cout<<"Enter the elements of array:";
for(int i=0;i<n;i++)
cin>>a[i];
int max=0;
for(int i=0;i<n;i++)
 {
   if(a[i]>=max){
        max=a[i];
        }
 }
cout<<"maximum elements of array:"<<max;

}