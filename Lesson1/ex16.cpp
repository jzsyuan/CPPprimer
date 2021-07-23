#include<iostream>
using namespace std;
 int main (){
    int v1,v2;
    cout << "Please enter two numbers: "<<endl;
    cin>> v1>>v2;
    if(v1>v2){
        cout<< v1 <<" is larger than "<< v2<< endl;
    }else if (v2>v1){
        cout<< v2 <<" is larger than "<< v1 << endl;
    }else{
        cout<< v1 <<" is equal  to "<< v2<< endl;
    }
    return 0;
}
