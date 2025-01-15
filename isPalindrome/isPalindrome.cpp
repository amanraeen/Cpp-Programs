//check if given number is a pallindrome number

#include<bits/stdc++.h>
using namespace std;


bool isPalindrome(int x) {
    if(x<0)
     return false;
     int y,rev=0;
     y=x;
     while (x!=0){
        if(( rev > INT_MAX/10 ) || ( rev < INT_MIN/10 )){
            return 0;
        }
        rev=rev*10+x%10;
        x=x/10;
     }
    if(y==rev)
     return true;
    return false; 
}


int main(){
    int num;
    bool z;
    cout<<"Enter a number : ";
    cin>>num;
    

    if(isPalindrome(num))
     cout<<"Given number is palindrome";
    else 
    cout<<"Given number is not palindrome";

    return 0;
     
}