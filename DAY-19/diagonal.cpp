#include<iostream>
using namespace std;

void dig(int arr[][3],int row,int col)
{

  int first=0;
  for(int i=0;i<3;i++)
  first+=arr[i][i];

  int second=0;
  int i=0,j=col-1;
  while(j>=0)
  {
    second+=arr[i][j];
    i++,j--;
  }
  cout<<first<<" "<<second;
}


int main() {
  int arr[3][3]={2,3,4,5,6,7,8,4,3};

  dig(arr,3,3);


}