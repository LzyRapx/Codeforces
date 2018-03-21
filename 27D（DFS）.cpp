#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[105],b[105],c[105];
int n = 0,m = 0;
bool isOK = true;
//三种情况，相交，一个在另一段里，一个在另一段外
void dfs(int idx, int v)// v: 1 : inside; 0 : outside
{
    if(c[idx] == -1)//这个点还没涂任何颜色 
	{
        c[idx] = v;
        for(int i = 1; i<=m; i++)
		{
            if(a[i] != a[idx] && b[i] != b[idx])//不能自环 
			{
                if(a[idx] < a[i] && a[i] < b[idx] && b[idx] < b[i])//相交 
				{
                    dfs(i, v^1);
                }
                else if(a[i] < a[idx] && a[idx] < b[i] && b[i] < b[idx])//相交 
				{
                    dfs(i, v^1);
                }
            }
        }
    }
    //如果涂到已涂过的颜色，且和需要涂的颜色不同则无解
    else if(c[idx]^v)
	{
        isOK = false;
    }
}

int main()
{
    memset(c,-1,sizeof(c));
    cin>>n>>m;
    for(int i = 1; i<=m; i++)
	{
        cin>>a[i]>>b[i];
        if(a[i]>b[i])
		{
            swap(a[i],b[i]);
        }
    }
//    if(n==6&&m==3)
//    {
//    	if(a[1]==1&&b[1]==3&&a[2]==3&&b[2]==5&&a[3]==1&&b[3]==5){
//    		cout<<"iii"<<endl;
//    		exit(0);
//		} 
//		
//	}
    for(int i = 1; i<=m; i++)
	{
        if(c[i] == -1)
		{
            dfs(i, 0);
        }
    }
    if(isOK)
	{
        for(int i=1; i<=m; i++)
		{
            cout<<(c[i]?'i':'o');
        }
        cout<<endl;
    }
    else {cout<<"Impossible"<<endl;}
    return 0;
}