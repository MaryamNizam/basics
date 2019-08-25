//binary to decimal conversion
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int binary;
    cout<<"enter binary number\n";
    cin>>binary;
    int rem=0,quotient=binary;
    int power=pow(2,0);
    int decimal=0, sum=0;
   
    while(quotient!=0){
        
        rem=quotient%10;
        decimal=rem*power;
        sum=sum+decimal;
        power=power*2;
        
        quotient=quotient/10;
       
        
        
    }
    cout<<"decimal value = "<<sum<<endl;
    
    system("pause");
    return 0;
    
}
