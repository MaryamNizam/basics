// display combinations of given number of +ve integers
#include <iostream>
using namespace std;
int main(){
    int i,j;
    int n;
    cout<<"enter total number of positive numbers for combinations\n";
    cin>>n;
    for(i=1;i<n;i++){
        for(j=i+1;j<=n;j++){
            
          
            if(i==n-1 && j==n)
                cout<<i<<j;
                else
                    cout<<i<<j<<",";
            
            }
    }
    cout<<endl;
    
    system("pause");
    return 0;
    
}

