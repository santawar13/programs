 #include <bits/stdc++.h>
using namespace std;
int minSplit(int);
//task 2
int main() {
    int c;
    cin>>c;
    minSplit(c);
    return 0;
}
int minSplit(int amount){
	int a[]={1,5,10,20,50};
	for(int k=0;k<=5;k++){
		int x=0;
		int counter=0;
		x+=max(a[k],a[k+1]);
		counter++;
		if(x==amount){
			cout<<counter<<endl;
			
		}
		
	}
}

