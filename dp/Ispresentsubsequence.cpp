#include<bits/stdc++.h>
using namespace std;
    bool isSubsetPresent(int n, int k, vector<int> &a)
    {
        for (int i = 0; i < n; i++)
        {   
            int sum=0;
            for (int j = i; j < n; j++)
            {
                sum+=a[j];
                if(sum==k){
                    return true;
                }
            }
            
        }
        return false;
    }
int main(){

    vector<int> v={4,3,5,2};
    int k=13;
    int n=v.size();
    cout<<isSubsetPresent(n,k,v);


    




}