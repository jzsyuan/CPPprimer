#include<iostream>
using namespace std;

int main (){
    cout <<" Please Enter a Series of numbers "<<endl;
    int total_negative = 0,value; 
    while (cin >>value){
        if(value<0){
            total_negative+=1;
        }
    }
    cout <<"The Numbers of Negative number is :  "<< total_negative <<endl;
return 0 ;
}