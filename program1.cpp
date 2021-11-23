#include <bits/stdc++.h>
using namespace std;
bool palidrom(string);
//Task 1
int main() {
	string x;
	cin>>x;
	palidrom(x);

    return 0;
}
bool palidrom(string text){
	string y = text;
    reverse(text.begin(),text.end());
    if(y==text)
    cout<<"yes this is palidrom";
    else
    cout<<"this isn't palidrom";

}

