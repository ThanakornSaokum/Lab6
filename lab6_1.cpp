#include<iostream>
using namespace std;

int main(){
    int x;
    int e = 0;
    int O = 0;
    
    cout << "Enter an integer: ";
    cin >> x;
    
    while(x!=0){
        
        
        if(x == 0){
            break;
        }
        if(x % 2 == 0){
            e++;
        }
        else{
            O++;
        }
        cout << "Enter an integer: ";
        cin >> x;
    }
    
    cout << "#Even numbers = " << e <<"\n";
    cout << "#Odd numbers = " << O;
    return 0;
}