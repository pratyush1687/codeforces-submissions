// codeforces479a.cpp
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int a,b,c;
	cin>>a>>b>>c;
	int ans=a+b+c;
	ans=max(ans,a*(b+c));
	ans=max(ans,(a+b)*c);
	ans=max(ans,a*b*c);
	cout<<ans;
	return 0;
}