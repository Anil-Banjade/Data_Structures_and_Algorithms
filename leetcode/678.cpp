class Solution {
public:
    bool checkValidString(string s) {
        int c1=0;
        int c2=0;
        for(int i=0;i<s.length();i++){
            if (s[i]=='('){
                c1++;
                c2++;

            }
            else if(s[i]==')'){
                c1--;
                c2--;

            }else if(s[i]=='*'){
                c1++;
                c2--;
            }
            if(c1<0){
                return false;
            }
            c2=std::max(c2,0);

            }
            return c2==0;
        }
        
    
};