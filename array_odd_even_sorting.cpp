#include <iostream>
using namespace std;
int main(){
    const int size=6; //program working fine for even sizes.
    int list[size]={0}, sorted[size]={0};
    int i;
    cout<<"enter numbers\n";
    for (i=0;i<size;i++)
        cin>>list[i];
    for (i=0;i<size;i++){
        
        if(i<=(size-1)/2){
        if(list[i]%2==0)
            sorted[size-1-i]=list[i];
        else
            sorted[i]=list[i];
        }
        else{
            if(list[i]%2==0){
                if(sorted[i]==0)
                sorted[i]=list[i];
                else
                    sorted[i+1]=list[i];
            }
            else{
                if(sorted[size-1-i]==0)
                sorted[size-1-i]=list[i];
                else
                    sorted[size-i]=list[i];
            }
            }
        
   }
    for(i=0;i<size;i++)
        cout<<sorted[i]<<" ";
    
    cout<<endl;
    
    system("pause");
    return 0;
    
}
