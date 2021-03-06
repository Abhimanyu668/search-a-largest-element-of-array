//sorting of array using insertion sort algorithm
#include<iostream>
using namespace std;
int main(){
    int n,i,j,key;
    cout<<"Enter no of element:";
    cin>>n;
    int arr[n];
    cout<<"Enter element of array:";
    for(i=0;i<n;i++)
    cin>>arr[i];
    for(i=1;i<n;i++){
         key=arr[i];     
      for(j=i-1;j<=0;j--){
          if(arr[j]>key){
              arr[j+1]=arr[j];
               }
        else
            break;}
      arr[j+1]=key;
      }
      for(i=0;i<n;i++)
       cout<<arr[i]<<" ";
}