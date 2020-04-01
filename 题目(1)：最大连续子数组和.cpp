#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a;
	int now=0;
	int ans=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a);
		now+=a;
		now<0?now=0:ans=max(now,ans);
	}
	printf("%d\n",ans);
}
