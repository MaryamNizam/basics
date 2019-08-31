#include <iostream>
using namespace std;
int main(){
    int num1,num2,i,temp,rem,n;
    bool b=true;
    
    cout<<"enter starting number\n";
    cin>>num1;
    cout<<"enter ending number\n";
    cin>>num2;
    for(i=num1;i<=num2;i++){
        temp=i;
        n=0;
        while(temp!=0){
            rem=temp%10;
            n=n+rem*rem*rem;
            temp=temp/10;
        }
        if(i==n){
            if(b==true){
                cout<<"armstrong numbers are : ";
                b=false;
            }
            cout<<i<<" ";
        }
     
        
    }
    cout<<endl;
    if(b==true)
        cout<<"no armstrong number exists in the range\n";
    system("pause");
    return 0;
    
}
