#include<iostream>
using namespace std;
int main() {
  int matrix[3][3]={2,3,4,5,6,7,8,9,7};


  for(int i=0;i<2;i++)
  for(int j=1;j<3;j++)
{
  swap(matrix[i][j],matrix[j][i]);
}

for(int i=0;i<3;i++)
  for(int j=0;j<3;j++)

  cout<<matrix[i][j]<<" ";

}