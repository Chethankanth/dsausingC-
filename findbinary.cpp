// the number of 1's present in the entered number binary
#include <iostream>
using namespace std;

int main(){
    cout<<"Enter the number: ";
    int n;
    cin >> n;
    int count;
    while(n!=0){
        if(n&1){
            count++;
            
        }
        n = n>>1;
            
        }
        cout<<"the number of 1's present in the entered number binary are"<<count<<endl;
    }
    
