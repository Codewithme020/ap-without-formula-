#include<iostream>
using namespace std;
int main(){
    cout<<"enter the number of terms";
    int n , i, a= 1;
    cin>>n;
    for(i = 1; i<=n;i++){
        cout<<a<<" ";
        a*=2;
    }
}