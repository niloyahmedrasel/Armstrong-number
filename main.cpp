#include <iostream>
using namespace std;

int main() {
        int n;
        cin>>n;
        
        int ok =n;
        int reminder;
        int sum = 0;
        
        while(n!=0){
            reminder = n%10;
            sum = sum + (reminder * reminder * reminder);
            n = n/10;
        }
        if(sum == ok){
            cout<<"This is an armstrong number";
        }
        else{
            cout<<"this is not an armstrong number";
        }

 return 0;
}
