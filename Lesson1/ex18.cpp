#include<iostream>
using namespace std;
void print_range(int low,int high)
{
    if (low>high )
        print_range(high,low);
    while(low<=high)
        cout<<low++<<" ";

}

int main()
{
    int low =0,high=0;
        cout<<"Please input to integers:\n";  
        cin >> low >>high;
        print_range(low,high);
    return 0;
}
