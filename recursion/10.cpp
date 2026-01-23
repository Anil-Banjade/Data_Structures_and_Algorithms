//check if a string is palindrome eg: dad
#include <bits/stdc++.h>
using namespace std;
bool reverseString(int i, string &s){
    if(i>=s.size()/2)
        return true;

    if(s[i]!=s[s.size()-i-1])
        return false;
    return reverseString(i+1,s);
}

int main(){
    string s="madam";
    cout<<reverseString(0,s);
}

//  TC O(n/2) SC O(n/2)

// at first m and m are checked they are not false so next recursion called so again that is not false so goes to next there size is greater than /2 so returned true so another func receives true and returns true and finally at last function or bottom of stack func sends true to main func.
// if false in 2nd position like madsm then in second recursion false is returned and then false from bottom of stack func to main func.