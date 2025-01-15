#include<bits/stdc++.h>
using namespace std;

int main(){
    int x, y, rev=0;
    cout<<"Enter the number : ";
    cin>>x;
    y=x;
        while (x!=0){
            if(( rev > INT_MAX/10 ) || ( rev < INT_MIN/10 )){
                return 0;
            }
            rev=rev*10+x%10;
            x=x/10;
        }
    cout<<"Reverse of "<<y<<" is "<<rev;    
}