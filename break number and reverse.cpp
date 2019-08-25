#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int number;
    cout<<"enter number"<<endl;
    cin>>number;
    
   
    int quotient=number;
    int rem=0;
    
   while(quotient!=0)
    {
        rem= quotient%10;
        cout<<rem<<endl;
        quotient=quotient/10;
        
        
    }
    
    system("pause");
    return 0;
}
