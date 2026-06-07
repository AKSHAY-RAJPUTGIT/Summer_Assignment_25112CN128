#include<iostream>
using namespace std;
int main() {
  int n;
  cout<<"Enter the number: ";
  cin>>n;
  if(n<2)
  cout<<"not prime";
for(int i=2;i<n;i++)
{
  if(n%i==0)
  cout<<"not prime";
}
cout<<"prime";
}