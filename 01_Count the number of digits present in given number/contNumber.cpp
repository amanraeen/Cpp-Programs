#include<iostream>
using namespace std;

int main()
{
    int number, counter=0;
    cout<<"Enter Number : ";
    cin>>number;

    while (number!=0){
        number=number/10;
        counter+=1;
    }
    cout<<"Total digits in given number : "<<counter;

    return 0;
}