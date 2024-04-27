// promble - 1]Baniry search in 2D array sored (row and colum sored 2D array)

//solution--->


#include <iostream>
using namespace std;
int main() {
 int arr[3][3]={{3,30,38},{36,43,60},{40,51,69}};
  int target;
  cout<<"enter the target"<<endl;
  cin>>target;
  int n = 3;
  int m=3;
 // int start=0,end=11,mid;
 int row=0,col=2;
  while(row<n&&col>=0){
    if(arr[row][col]==target){
        cout<<"element is found"<<endl;
        break;
    }
    else if(arr[row][col]<target)
    row++;
    else
    col--;
  }
  if(arr[row][col]!=target)
  {
    cout<<"element is not found"<<endl;
  }
    return 0;
}