#include <iostream>
using namespace std;
int main(){
    int x,y,z;
    char ch;
    cout<<"input expression"<<endl;
    cin>>x>>ch>>y;
    
    if(ch=='+'){
        z=x+y;
    cout<<x<<ch<<y<<"="<<z<<endl;
    }    if(ch=='-'){
        z=x-y;
        cout<<x<<ch<<y<<"="<<z<<endl;
    }
        
    if(ch=='*'){
        z=x*y;
        cout<<x<<ch<<y<<"="<<z<<endl;
    }
    if(ch=='/'){
        if (y!=0){
            z=x/y;
        cout<<x<<ch<<y<<"="<<z<<endl;
    }
    else cout<<"math error\n";
    }
    
    
}
