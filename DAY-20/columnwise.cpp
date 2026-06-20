#include <iostream>
using namespace std;
void columnWiseSum(int arr[][3], int row, int col)
{
    for(int j = 0; j < col; j++)
    {
        int sum = 0;
        for(int i = 0; i < row; i++)
        {
            sum += arr[i][j];
        }
        cout << "Sum of Column " << j + 1 << " = " << sum << endl;
    }
}
int main()
{
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    columnWiseSum(arr, 3, 3);
    return 0;
}