// user keeps inputing numbers of differents length. break them into digits.

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int number,length,total=0;
    cout<<"enter numbers one by one. to end program enter -1\n";
    cout<<"enter number\n";
    cin>>number;
    
    while(number!=-1){
    
    cout<<"enter length of number\n";
    cin>>length;
    
    
    int output=0;
    int temp=0;
    int j=0;
    int power=pow(10,length-1);
    for(int i=0;i<length;i++){
        output=number/power;
        temp=output;
        output=output-j;
        cout<<output<<" ";
        j=temp*10;
        power=power/10;
        
        
        
    }
    
    cout<<endl;
        total=total+1;
    cout<<"enter number\n";
    cin>>number;
    }
    
    cout<<"total numbers input by user= "<<total<<endl;
    
    system("pause");
    return 0;

}
