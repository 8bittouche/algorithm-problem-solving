import java.util.Stack;

class Solution {
    public boolean isValid(String s) {
        Stack<Character> st = new Stack<>();

        for(int i=0; i<s.length(); i++){
            char bracket = s.charAt(i);

            if(bracket == '(' || bracket == '{' || bracket == '['){
                st.push(bracket);
            }else if(bracket == ')'){
                if(st.isEmpty() || st.pop() != '('){
                    return false;
                }
            }else if(bracket == '}'){
                if(st.isEmpty() || st.pop() != '{'){
                    return false;
                }
            }else if(bracket == ']'){
                if(st.isEmpty() || st.pop() != '['){
                    return false;
                }
            }
        }

        if(!st.isEmpty()){
            return false;
        }

        return true;
    }
}