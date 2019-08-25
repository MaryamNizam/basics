// In this question your task is to input a number and convert it to a decimal number. The given number can be in any base from 2-16. You will input base of the number, number of digits in the number and the number.
//Example:
//Input:
//Enter base of the number: 11
//Enter no. of digits in the number: 3 Enter number: 16A
//Output:
//The number in decimal = 197
//Example:
//Input:
//Enter base of the number: 16 Enter no. of digits in the number: 4 Enter number: 1A5E
//Output:
//The number in decimal = 6750



#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int base=0, Ndigits=0;
    char digit=0;
    int num=0;
    
    cout<<"enter number of digits\n"<<"enter base\n";
    cin>>Ndigits>>base;
    
    if(base>=2 && base<=16){
    cout<<"enter number\n";
    
    int power=0;
    power=Ndigits-1;
    while(power >= 0 ){
        
        int i=0, j=0;
        
        cin>>digit;
        
        if(digit=='A')
            digit=10;
            

        if(digit=='B')
         digit=11;
            
            
        if(digit=='C')
         digit=12;
            
            
         if(digit=='D')
          digit=13;
            
          if(digit=='E')
          digit=14;
            
         if(digit=='F')
          digit=15;
            
        else
         digit=digit-48;
              
        
       
        
                                               
        
        j= pow (base , power);
        i=digit*j;
        num= num + i;
        power = power-1;
        
    }
    cout<<"the number in decimal="<<num<<endl;
        
        
        
    }
    else
        cout<<"invalid base\n base should be between 2 and 16\n";
    
    system ("pause");
    
    
    return 0;
}
