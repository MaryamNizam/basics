#include <iostream>
using namespace std;
int main(){
    float pi=0, denominator=1;
    int index=0, n;
    cout<<"enter number of terms\n";
    cin>>n;
    if(n>1000){
        while(n>0){
            if(index%2==0){
                pi=pi+(4/denominator);
            }
            else{
                pi=pi-(4/denominator);
            }
            denominator=denominator+2;
            n=n-1;
            index=index+1;
            
            }
        cout<<"pi = "<<pi<<endl;
        
        }
    else
        cout<<"error: number of terms should be greater than 1000\n";
    
    system("pause");
    return 0;
}

