#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=5e6+7;
char str[N<<1],s[N];
int p[N<<1];
int n,len;
ll dp[N];
/*
题意:
设Degree的定义为：
每个串（包括空串）的等级至少为0.
若一个长度为len的前缀是回文串，且它的一个长度为floor(len/2)的前缀和后缀的“Degree”为k，
则他的“Degree”是k+1。
其余一个字符串所有前缀的“Degree”的和。
题解:
用manacher算法处理出最左端为第一个字母的所有回文串，然后dp一下。
dp[i]表示长度为i的前缀是k-回文串（k=dp[i])。 则dp[i]=dp[i/2]+1;
ans=sigma(dp[i]);
*/
ll Manacher()
{
    int i,j,id,mx;
    ll ans=0;
    id=0,mx=1;
    p[0]=p[1]=1;
    for(i=0;i<n;i++)
	{
        p[i]=1;
        if(mx>i){
            p[i]=min(p[(id<<1)-i],mx-i);
        }
        int k=i+p[i];  //.....
        while(str[i+p[i]]==str[i-p[i]]) k++,p[i]++; //.....
        if(i+p[i]>mx){
            id=i;
            mx=i+p[i];
        }
        /********************/
        if(2*i-k==0 && i>1){
        	int l=p[i]-1;
            dp[l]=dp[l/2]+1;
            //cout<<"dp["<<l<<"]="<<dp[l]<<endl;
            ans += dp[l];
		}
		/********************/
    }
    return ans;
}


void getstr()
{
   str[0]='$';
   str[n]='#';
   str[n+1]='\0';
    for(int i=len*2;i>=1;--i)
	{
        if(i&1) str[i]='#';
        else str[i]=str[i/2];
    }
}


int main()
{
	scanf("%s",str+1);
	
	len=strlen(str+1);
	n=2*len+1;
	getstr();
//	puts(str);
	memset(dp,0,sizeof(dp));
	ll ans =Manacher();
	cout<<ans<<endl;
	return 0;
}
/*
a2A
1

abacaba
6
*/