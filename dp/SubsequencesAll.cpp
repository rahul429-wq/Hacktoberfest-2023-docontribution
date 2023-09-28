#include<bits/stdc++.h>
using namespace std;


int countSubsequences(string s) {

    int n=s.length();
    vector<int> dp(n+1,0);
    dp[0]=1;
    for (int i = 1; i <=n ; i++)
    {

        dp[i]=2*dp[i-1];
        for (int j = i-2; j>=0; j--)
        {
            if(s[i-1]==s[j]){
                dp[i]-=dp[j];

                break;
            }
        }
        

    }

    return dp[n]-1;

}


string moreSubsequence(int n, int m, string a, string b) {
    int countA = countSubsequences(a);
    int countB = countSubsequences(b);

    if (countA > countB) {
        return a;
    } else {
        return b;
    }
}

int main(){
    string a = "abc";
    string b = "dddd";
    vector<int> v={1,3,4};
    cout<<a.size()<<endl;

    // string result = moreSubsequence(a.length(), b.length(), a, b);
    // cout << "The result is: " << result << endl;

}