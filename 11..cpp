// Write a program in C++ to find the sum of the series 1 + 1/2^2 + 1/3^3 + ..+ 1/n^n.
#include <iostream>
#include<math.h>
using namespace std;
int main() 
{
    int i,n;
    float sum=0;
    cout<<"Enter the number for the sum is required:\n";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        sum=sum+1/pow(i,i);
    }
    cout<<"The sum of "<<n<<"number is:"<<sum;
    return 0;
}