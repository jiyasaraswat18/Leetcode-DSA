class Solution {
public:
    int maxDepth(string s) {
        int m=0;
        int depth=0;
        for(char ch:s){
            if(ch=='('){
                depth++;
                m=max(m,depth);
            }
            else if(ch==')'){
                depth--;
            }
        }
        return m;
    }
};