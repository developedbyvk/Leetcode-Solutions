class Solution {
public:
    bool isValid(string s) {
        stack<char> bracketStack;
    
        for(int i=0;i<s.size();i++){
            char openingBracket = s[i];
            //pushing all the opening brackets in stack
            if(openingBracket == '(' || openingBracket == '{' || openingBracket == '['){
                bracketStack.push(s[i]);
            }
            else{
                //as soon as the bracket isn't opening check if the stack is empty or not
                if(!bracketStack.empty()){
                    char top = bracketStack.top();
                    //checking if the bracket is balanced or not
                    if(top=='('  && s[i]==')'  || top=='{' &&  s[i]=='}' || top=='[' && s[i]==']'){
                        bracketStack.pop();
                    }
                    //if not balanced return false
                    else
                        return false;
                }
                //else if the stack is not empty return false
                else
                    return false;
            }
        }
        
        if(bracketStack.empty()) 
            return true;
        //if after traversal of the entire string there is still a bracket left in the stack that means brackets are unbalanced
        return false;
    }
};