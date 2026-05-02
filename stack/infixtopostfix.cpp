#include<iostream>
#include<stack>
using namespace std;

int priority(char op){
    if(op=='+' || op=='-')
    return 1;
    if(op=='*' || op=='/')
    return 2;
    if(op=='^')
    return 3;
    return 0;
} 
//converts infix to postfix
//time complexity: o(n)
//space complexity:o(n)
string infixtopostfix(string s){
    stack<char> st;
    string result="";
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        if(isalnum(ch)){
            result+=ch;
        }
        else if(ch=='('){
            st.push(ch);
        }
        else if(ch==')'){
                while(!st.empty() && st.top()!='('){
                    result +=st.top();
                    st.pop();
                }
                st.pop();
            }
        else{
            while (!st.empty() && priority(ch)<=priority(st.top()))
            {
                result +=st.top();
                st.pop();
            }
            st.push(ch);
            
        }
    }
     while(!st.empty()){
            result +=st.top();
            st.pop();
        }
    return result;
}

int main(){
    string exp = "a+b*(c-d)";
    cout<<infixtopostfix(exp);
}