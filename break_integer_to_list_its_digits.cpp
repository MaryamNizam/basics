//break an integer to list its digits eg input =123
//output=
//       1
//       2
//       3
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int number;
    cout<<"enter number"<<endl;
    cin>>number;
    double length;
    cout<<"enter length of number"<<endl;
    cin>>length;
    int output;
    int j=0,temp=0;
    int power=pow(10,length-1);
    for(int i=1;  i<=length; i++)
    {
        output=number/power;
        temp=output;
        output=output-j;
        cout<<output<<endl;
        power=power/10;
        j=temp*10;
    }
    
    system("pause");
    return 0;
}
