#include<iostream>
using namespace std;
void factorial(){
    int n,factoral=1;
    cout<<"enter your number : "<<endl;
    cin>>n;
    for (int i=1 ; i<=n ; i++){
        factoral=factoral*i;
    }
    cout<<"factorial of number "<<n<<" is : "<<endl;
    cout<<factoral;
}
 int main(){
    factorial();
    return 0;

 }
