// library has hired you to develop a simple program for book inventory. You job is to write a C++ program that input prices of books purchased in year 2017 and compute following statistics:
//1. Total number of books purchased in 2017.
//2. Maximum price that library has paid for any book. Also find the number of books that has
//the maximum price.
//3. Second Maximum Price.
//4. Minimum price that library has paid for any book. Also find the number of books that has
//the minimum price.
//Note: The librarian will enter the book prices in rupees separated by spaces and -1 will indicate that there are no more prices.
//Example:
//Input:
//3400 4503 2900 5000 2000 5000 321 123 345 628 -1
//Output:
//No of books =10
//Maximum Price = 5000, No. of books that have maximum price =2 Second Maximum Price = 4503
//Minimum Price =123, No. of books that have minimum price =1
//
//
#include <iostream>
using namespace std;
int main() {
    int Price, N_book=0, Max=0, Max2nd=0, Min=0, N_max=0, N_min=0;
    cout<<"enter book prices\n";
    
    cin>>Price;
    Min=Price;
    
    while(Price != -1){
        
        if (Price > Max){
            Max2nd=Max;
            Max=Price;
            N_max=0;
        }
        else
            if(Price>Max2nd && Price!=Max){
                Max2nd=Price;
            }
           
        
        
        
        if(Price==Max)
            N_max=N_max+1;
        
        if(Price<Min){
            Min=Price;
            N_min=0;
        }
        
        if(Price==Min)
            N_min=N_min+1;
        
        
        
        N_book= N_book+1;
        
        cin>>Price;
    }
    
    cout<<"total number of books="<<N_book<<endl;
    cout<<"maximum price="<<Max<<endl;
    cout<<"minimum price="<<Min<<endl;
    cout<<"no of books with maximum price="<<N_max<<endl;
    cout<<"no of books with minimun price="<<N_min<<endl;
    cout<<"2nd maximum price="<<Max2nd<<endl;
    
    
    system("pause");
    return 0;
    
}
