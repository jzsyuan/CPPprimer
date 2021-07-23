#include<iostream>
using namespace std;

int main (){
    int sum_num=0,value;
    while(cin>>value){
        cout << "your number: "<< value <<endl;
        sum_num += value ; 

    }
     cout <<"Sum is: " << sum_num <<endl;
    return 0 ;
}