#include<iostream>
using namespace std;

int main(){
    double n;
    int product=1;
    cout<<"enter n:";
    cin>>n;
    for(int i=1;i<=n;i++){
        product=product*i;
    }
    cout<<product;
    return 0;
}