#include<iostream>
using namespace std;

int main(){
    int n;
    int i=0;
    double ans=0;

    cout<<"enter the number which you want to convert into binary number: "<<endl;
    cin >> n;
    while(n!=0){
        double bit = n & 1;
        ans = (bit * pow(10,i))+  ans;
        
        n = n >> 1;
        i++;

    }
cout<<"the answeris: "<< ans <<endl;
return 0;
}
