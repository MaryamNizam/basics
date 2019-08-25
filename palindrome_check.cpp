// check if the number is a palindrome
#include <iostream>
using namespace std;
int main(){
    long number; //to increase size of number.
    long reverse=0, part=0;
    long num;
    cout<<"enter number\n";
    cin>>number;
    num=number;
    while (num!=0){
        part=num%10;
        reverse=(reverse*10)+part;
        num=num/10;
        
    }
    if(number==reverse)
        cout<<"palindrome\n";
    else
        cout<<"not palindrome\n";
    
    system("pause");
    return 0;
    
}
