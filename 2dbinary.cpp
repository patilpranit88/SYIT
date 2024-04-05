//problem 1] binary search use in 2D sorted array
//solution --->



#include <iostream>
using namespace std;
int main() {
  int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
  int target;
  cout<<"enter the target"<<endl;
  cin>>target;
  int n = 3;
  int m=4;
  int row_index,col_index,start=0,end=11,mid;
  while(start<=end){
      mid=start+(end-start)/2;
      row_index=mid/m;
      col_index=mid%m;
      if(arr[row_index][col_index]==target)
     { cout<<"element is found "<<endl;
     break;
     }
      else if(arr[row_index][col_index]<target)
      start=mid+1;
      else
      end=mid-1;
       
  }
 if(arr[row_index][col_index]!=target){
     cout<<"element is not found "<<endl;
     
 }

    return 0;
}