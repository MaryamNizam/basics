// permute the given number of positive integers
#include <iostream>
using namespace std;
int main(){
    int i,j;
    int n;
    cout<<"enter total number of positive numbers to be permutated\n";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++)
            if(i!=j){
                if(i==n && j==n-1)
                    cout<<i<<j;
                else
                    cout<<i<<j<<",";
            }
    }
    cout<<endl;
    
    system("pause");
    return 0;
        
    }

