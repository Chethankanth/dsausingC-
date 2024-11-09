#include<iostream>
using namespace std;

int main(){
    
    int Num = 234;
    int product = 1;
    int sum = 0;
    while(Num!=0){
    int rem = (Num%10);
    
    
    
    product = product * rem;
    sum = sum + rem;
    Num = (Num/10);
    
  
    
    }
    int diff = product - sum;
    cout<<"the product of the numbers is: " <<product<<endl;
    cout<<"the sum of the numbers is: "<<sum<<endl;
    cout<< "The difference between the product and the sum is: "<<(diff)<<endl;
    
}
