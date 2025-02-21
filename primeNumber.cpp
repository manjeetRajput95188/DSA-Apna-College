#include <iostream>
using namespace std;

void primeNumber(int n){
    if(n <= 2){
        cout<<"Please, enter a valid Number"<<endl;
    }
    else{
     for(int i =1 ; i<+42; i++){    //for(int i =1 ; i*i<+42; i++){
        if(n % i == 0){
            cout<<i<<endl;
        }
        else{
            continue;
        }
    }
}
}
int main() {
    int num = 0;
    cout<<"Enter a number"<<endl;
    cin>>num;
    primeNumber(num);
    
   
    return 0;
}