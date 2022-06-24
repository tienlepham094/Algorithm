#include<iostream>
#include<stack>
using namespace std;

// funcion to check whether two characters are openning
// and closing of some type
bool ArePair(char opening, char closing){
	if(opening =='(' && closing ==')') return true;
	else if(opening == '{' && closing =='}') return true;
	else if(opening =='[' && closing ==']' ) return true;
	else return false;
}
bool AreParentheseBalances(string exp){
	stack<char> S;
	for(int i = 0; i<exp.length(); i++){
		if(exp[i]=='(' || exp[i]=='{'  || exp[i] =='['){
			S.push(exp[i]);
		}
		else if(exp[i]==')'|| exp[i]=='}'  || exp[i] ==']'){
			if(S.empty()|| !ArePair(S.top(), exp[i])) return false;
			else S.pop();
		}
	}
	return S.empty()? true:false;
}
int main(){
	string expression;
	cout<<"Enter an expression: "<<endl;
	cin>>expression;
	if(AreParentheseBalances(expression)){
		cout<<"Balance"<<endl;
	}else cout<<"Not Balance"<< endl;
}
