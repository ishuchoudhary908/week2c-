#include<iostream>
using namespace std;
int sorting(int arr[],int n){
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[j],arr[i]);
            }
        }
    }
    cout<<"array after sorting = ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }
   
}
int main(){
    int arr[8]={54,65,81,32,8,45,87,96};
    int n=8;
    cout<<endl;
    cout<<"array before sorting = ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    sorting(arr,n);
    

}