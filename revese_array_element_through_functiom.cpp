# include<iostream>
using namespace std;
void array(){
    int arr[5];
    for(int i=0;i<5;i++){
        cout<<"enter array element = ";
        cin>>arr[i];
    }
    for(int start=0,end=4 ; start<end ; start++,end--){
        swap(arr[start],arr[end]);

    }
    
        cout<<"reverse of array is = ";
        for(int i=0;i<5;i++){

        cout<<arr[i]<<"  ";
    }}

int main(){
    array();
    return 0;
}