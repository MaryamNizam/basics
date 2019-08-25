// input= 1234
// output = 4 3 2 1
#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"enter number\n";
    cin>>number;
    int rem=0, quotient=number;
    
    while(quotient!=0){
        rem=quotient%10;
        cout<<rem<<" ";
        quotient=quotient/10;
        
    }
    cout<<endl;
    
    system("pause");
    return 0;
    
    
}
