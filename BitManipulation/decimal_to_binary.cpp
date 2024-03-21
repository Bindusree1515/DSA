#include <bits/stdc++.h>
using namespace std;
const int N=2*(1e5);
int main() {
    int n,i=0;cin>>n;
    int a[32]={0};
    while(n>=1){
        a[i]=n%2;
        cout<<a[i];
        i++;
        n=n/2;
    }
    cout<<endl;
    reverse(a,a+n);
    for(int i = 31 ; i >=0 ; i--){
        cout<<a[i];
    }
    return 0;
 }
// $ ./"cfcp.exe"
// 10
// 0101
// 00000000000000000000000000001010
// this is without string , with string its easy just adding thm 
// in the solution the leading zeroes shd be removed 
string removeLeadingZeros(string num)
{
    // traverse the entire string
    for (int i = 0; i < num.length(); i++) {
 
        // check for the first non-zero character
        if (num[i] != '0') {
            // return the remaining string
            string res = num.substr(i);
            return res;
        }
    }
 
    // If the entire string is traversed
    // that means it didn't have a single
    // non-zero character, hence return "0"
    return "0";
}

int main() {
    int n;cin>>n;
    // for(int i=0;i<32;i++){ 
    //this for loop prints in reverse order 
    // so we use the below for loop
    for (int i = 31; i >= 0; i--) { 
        int k=n>>i;
        if(k&1){
            cout<<"1";
        }else{
            cout<<"0";
        }
    }
    return 0;
 }
