#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli bit(lli a ,lli b,lli n);

int main()	
{
	int t,i;
	cin>>t;
	lli x,y,n;
	vector<lli>vec;
	for(i=0;i<t;i++)
	{
		cin>>x>>y>>n;
		vec.push_back(bit(x,y,n));
	}
	for(i=0;i<vec.size();i++)
		cout<<vec[i]<<endl;
}
lli bit(lli a ,lli b,lli n)
{
	lli res=1;
	while(b!=0)
	{
		if(b&1)
			res=(res*a)%n;
		a=(a*a)%n;
		b>>=1;
	}
	return res;

}