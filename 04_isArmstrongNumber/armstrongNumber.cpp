//program to find three digit armstrong number

#include<bits/stdc++.h>
using namespace std;

bool armstrongNumber(int x){
    int  lastDigit;
    long long originalNum=x, sum=0;
    
    while(x!=0){
        lastDigit=x%10;
        sum+=lastDigit*lastDigit*lastDigit;
        x=x/10;
    }

    return sum==originalNum;
};

int main(){
    int num;
    cout<<"Enter Number : ";
    cin>>num;
    if(armstrongNumber(num))
      cout<<num<<" is an armstrong number"<<endl;
    else
    cout<<num<<" is not an armstrong number"<<endl;
    return 0;
}