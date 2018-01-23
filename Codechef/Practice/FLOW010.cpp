#include <bits/stdc++.h>
using namespace std;
int main() {
	long long t,a,b;
	cin>>t;
	while(t--)
	{
	    char ch;
	    cin>>ch;
	    if(ch=='B' or ch=='b')
	        cout<<"BattleShip\n";
        else if(ch=='C' or ch=='c')	
            printf("Cruiser\n");
        else if(ch=='D' or ch=='d')
            cout<<"Destroyer\n";
        else if(ch=='F' or ch=='f')
            cout<<"Frigate\n";
	}
	return 0;
}
