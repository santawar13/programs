#include <bits/stdc++.h>
using namespace std;
bool isProperly(string);
//task 4
int main() {
    string N;
    cin>>N;
	isProperly(N);
    return 0;
}
     bool isProperly(string sequence){
     int m=0;
    for(int k=0;k<sequence.size();k++){
    	if(sequence[k]=='(')
    	m++;
    	if(sequence[k]==')')
    	m--;
    	if(m<0){
    		cout<<"NO";
    	return 0;
		}
	}
	if(m==0){
		cout<<"YES";
	}
	else{
		cout<<"NO";	}	
}

