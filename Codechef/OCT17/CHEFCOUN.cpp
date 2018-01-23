#include <bits/stdc++.h>
using namespace std;
#define vi vector <unsigned int>
#define pb push_back
int wrongSolver(vector <unsigned int> a) {
	int n = a.size();
	std::vector<unsigned int> prefSum(n), sufSum(n);
	prefSum[0] = a[0];
	for (int i = 1; i < n; i++) {
		prefSum[i] = prefSum[i - 1] + a[i];
	}
	sufSum[n - 1] = a[n - 1];
	for (int i = n - 2; i >= 0; i--) {
		sufSum[i] = sufSum[i + 1] + a[i];
	}
	unsigned int mn = prefSum[0] + sufSum[0];
	int where = 1;
	for (int i = 1; i < n; i++) {
		unsigned int val = prefSum[i] + sufSum[i];
		if (val < mn) {
			mn = val;
			where = i + 1;
		}
	}
	return where;
}
int main()
{
 int t,n;
  cin>>t;
  while(t--)
  {
   vi vec;
  cin>>n;
  int po = pow(2,16);
  //vector <unsigned int> vec;
   //vec.pb(2*pow(10,9));vec.pb(2*pow(10,9));vec.pb(294967296);vec.pb(2*pow(10,9));vec.pb(2*pow(10,9));
  for(int i=0;i<n/po;i++){
   for(int j=0;j<po-2;j++){
   cout<<fixed<<setprecision(0)<<pow(2,16)<<" ";vec.pb(pow(2,16));}
  cout<<pow(2,16)-5<<" "<<5<<" ";vec.pb(pow(2,16)-5);vec.pb(5);
  }
  for(int i=0;i<n%po;i++){
    cout<<1<<" ";vec.pb(1);}
    cout<<endl;
  //cout<<wrongSolver(vec)<<" "<<vec[wrongSolver(vec)]<<endl;
  }
return 0;
}
