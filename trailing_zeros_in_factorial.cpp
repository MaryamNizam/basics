// calculate the number of trailing zeros in factorial of a number
#include <iostream>
using namespace std;
int main(){
    int number;
    int n=0;
    cout<<"enter number\n";
    cin>>number;
    
    for(int divisor=5; divisor<=number; divisor=divisor*5)
        n=n+number/divisor;
    
    
    
    cout<<"number of trailing zeros in "<<number<<"! are = "<<n<<endl;
    
    system("pause");
    return 0;
}
