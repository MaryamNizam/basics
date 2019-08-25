// input integers and compute sums of even and odd integers separately and output it
// eg input= 1 2 3 4 5
// output =
// evensum= 6
//  oddsum= 9
#include <iostream>
using namespace std;
int main(){
    int num,total;
    cout<<"enter total number of integers\n";
    cin>>total;
    cout<<"enter integers\n";
    
    int count=1, evensum=0, oddsum=0;
    while(count<=total){
        cin>>num;
        if(num%2==0)
            evensum=evensum+num;
        else
            oddsum=oddsum+num;
        
        count=count+1;
    }
    cout<<"even sum= "<<evensum<<endl;
    cout<<"odd sum= "<<oddsum<<endl;
    system("pause");
    return 0;
}
