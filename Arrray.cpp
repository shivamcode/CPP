#include<iostream>
using namespace std;
int main()
{
  int arr[10];
  int i;
  cout<<"\n Enter Data for Array";
  for(i=0;i<10;i++)
  {
      cout<<"\n Data["<<i<<"]:";
      cin>>arr[i];
  }
  //to print updated Array
  cout<<"\n Data :";
  for(i=0;i<10;i++)
  {
    cout<<"\t"<<arr[i];
   }
   return 0;
 }
