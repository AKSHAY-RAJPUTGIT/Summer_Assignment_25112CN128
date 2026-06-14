#include<iostream>
using namespace std;
int main() {
  int arr[5]={2,5,8,7,4};
  int index=-1,target;
  cin>>target;
  for(int i=0;i<5;i++)
  {
    if(arr[i]==target)
    index=i;
  }
  cout<<index;
}