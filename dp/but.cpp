#include<bits/stdc++.h>
using namespace std;


int getBit(int num, int position) {
    return (num >> position) & 1;
}

vector<int> bitman(int n,int i){

    vector<int> res;


    res.push_back(getBit(n,i-1));

    int setbit=n|(1<<(i-1));
    res.push_back(setbit);

    int clearbit=n&~(1<<(i-1));
    res.push_back(clearbit);

    return res;


}

bool evenodd(int n){

        int mask=1;
        if((n&mask)==1){
            return false;
        }else{
            return true;
        }

}
bool getithbit(int n,int i){

        int mask=1<<i;
        if((n&mask)==0){
            return false;
        }else{
            return true;
        }

}

int countsum(int N){

int counter=0;
    while(N>0){

        if((N&1)!=0){
            counter++;
        }
        N=N>>1;
    }
    return counter;
}

void setrightbit(int n=5){

    int pos=0;
    while (n>0)
    {
        if((n&1)==0){
            n|=(1<<pos);
            break;
        }

        n=n>>1;
        pos++;
    }

    cout<<n<<endl;

}



int main(){


    setrightbit();
    // cout<<countsum(5);

    /* int n=5;    
    int allsum=0;
    for (int i = 1; i <= n; i++)
    {
        allsum+=countsum(i);
    }
    
    cout<<allsum;
 */

    // cout<<getithbit(5,2);
    // int n=2;
    // cout<<evenodd(n)<<endl;
    /* for (int i = 1; i < 20; i++)
    {   
        if(evenodd(i)){
            cout<<"even is -> "<<i<<endl;
        }else{
            cout<<"odd is -> "<<i<<endl;
        }
    }
     */



    



}