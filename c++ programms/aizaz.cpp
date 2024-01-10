#include<iostream>
using namespace std;
int main()
{

int arr[30],n;
cout<<"Enter size of array "<<endl;
cin>>n;
cout<<"Enter elements of array "<<endl;
for(int i=0;i<n;i++){
cin>>arr[i];
}
cout<<"\nEven elements ";
for(int i=0;i<n;i++){
if(arr[i]%2==0){
    cout<<arr[i]<<" ";
}
}
cout<<"\nOdd elements  ";
for(int i=0;i<n;i++){
if(arr[i]%2!=0){
    cout<<arr[i]<<" ";
}
}

return 0;

}