#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float x,n;
    cout<<"enter value of x\n";
    cin>>x;
    cout<<"enter no of terms\n";
    cin>>n;
    
    float numerator=pow(x,0);
    float denominator=1, sum=0;
    float power=pow(x,2);
    
    for(int i=1;i<=n;i++){
        
        if(i%2==0)
            sum=sum-numerator/denominator;
        else
            sum=sum+numerator/denominator;
        
        numerator=numerator*power;
        denominator=denominator*(2*i)*(2*i-1);
        
        
    }
    
    cout<<"cos"<<x<<" is = "<<sum<<endl;
    
    system("pause");
    return 0;
    
    
    
}
