#include <bits/stdc++.h>
using namespace std;
int countVariants(int );
//task 5
int main() {
    int n;
    cin>>n;
    countVariants(n);
    return 0;
}
int countVariants(int stearsCount){
    int a[stearsCount+1];	 
    a[1]=1;
    a[2]=2;    
    for(int k=3;k<=stearsCount;k++){
        a[k]=a[k-1]+a[k-2];
    }   
    cout<<a[stearsCount];	
}

