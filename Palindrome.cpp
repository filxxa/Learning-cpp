#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter a positive number: ";
    cin>>n;
    int reversedn = 0;
    for (int i=n; i!=0; i/=10) {
        int digit = i % 10;
        reversedn = reversedn * 10 + digit;
    }
    if (reversedn == n){
        cout<<n<<" is a palindrome number"<<endl;
    } else {
        cout<<n<<" is not a palindrome number"<<endl;  
    }

}