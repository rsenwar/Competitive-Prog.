#include<bits/stdc++.h>
using namespace std;
int _lcm(int a,int b) {
  return (a*b)/__gcd(a,b);
}
int main() {
  int t,k,n;
  cin>>t;
  while(t--) {
    cin>>k;
    int f = 0;
    int *Po = new int[k];
    int *Sa = new int[k];
    for(int i=0;i<k;i++)
      cin>>Po[i]>>Sa[i];
    for(int i=0;i<k-1;i++) {
      if(Po[i]!=Po[i+1])
        f = 1;
    }
    cin>>n;
    int *Di = new int[n];
    int *Ma = new int[n];
    vector < pair<int,int> > Wt;
    for(int i=0;i<n;i++) {
      cin>>Di[i]>>Ma[i];
      Wt.push_back(make_pair(Ma[i],Di[i]));
    }
    sort(Wt.begin(),Wt.end());
    int arr[1200][2];
    int pt=0;
    for(int i=0;i<k;i++) {
      arr[pt][0] = Po[i];
      arr[pt++][1] = Sa[i];
    }
    for(int i=0;i<k;i++) {
      for(int j=i+1;j<k;j++) {
          arr[pt][0] = Po[i] + Po[j];
          arr[pt++][1] = Sa[i] + Sa[j];
      }
    }
    for(int i=0;i<k;i++) {
      for(int j=i+1;j<k;j++) {
        for(int l=j+1;l<k;l++) {
          arr[pt][0] = Po[i] + Po[j] + Po[l];
          arr[pt++][1] = Sa[i] + Sa[j] + Sa[l];
        }
      }
    }
    for(int i=0;i<k;i++) {
      for(int j=i+1;j<k;j++) {
        for(int l=j+1;l<k;l++) {
          for(int m=l+1;m<k;m++) {
            arr[pt][0] = Po[i] + Po[j] + Po[l] + Po[m];
            arr[pt++][1] = Sa[i] + Sa[j] + Sa[l] + Sa[m];
          }
        }
      }
    }
    for(int i=0;i<k;i++) {
      for(int j=i+1;j<k;j++) {
        for(int l=j+1;l<k;l++) {
          for(int m=l+1;m<k;m++) {
            for(int p=m+1;p<k;p++) {
            arr[pt][0] = Po[i] + Po[j] + Po[l] + Po[m] + Po[p];
            arr[pt++][1] = Sa[i] + Sa[j] + Sa[l] + Sa[m] + Sa[p];
          }
          }
        }
      }
    }
    for(int i=0;i<k;i++) {
      for(int j=i+1;j<k;j++) {
        for(int l=j+1;l<k;l++) {
          for(int m=l+1;m<k;m++) {
            for(int p=m+1;p<k;p++) {
              for(int q=p+1;q<k;q++) {
            arr[pt][0] = Po[i] + Po[j] + Po[l] + Po[m] + Po[p] +Po[q];
            arr[pt++][1] = Sa[i] + Sa[j] + Sa[l] + Sa[m] + Sa[p] + Sa[q];
          }
          }
          }
        }
      }
    }
    for(int i=0;i<k;i++) {
      for(int j=i+1;j<k;j++) {
        for(int l=j+1;l<k;l++) {
          for(int m=l+1;m<k;m++) {
            for(int p=m+1;p<k;p++) {
              for(int q=p+1;q<k;q++) {
                for(int r=q+1;r<k;r++) {
            arr[pt][0] = Po[i] + Po[j] + Po[l] + Po[m] + Po[p] +Po[q] + Po[r];
            arr[pt++][1] = Sa[i] + Sa[j] + Sa[l] + Sa[m] + Sa[p] + Sa[q] + Sa[r];
          }
          }
          }
          }
        }
      }
    }
    for(int i=0;i<k;i++) {
      for(int j=i+1;j<k;j++) {
        for(int l=j+1;l<k;l++) {
          for(int m=l+1;m<k;m++) {
            for(int p=m+1;p<k;p++) {
              for(int q=p+1;q<k;q++) {
                for(int r=q+1;r<k;r++) {
                  for(int s=r+1;s<k;s++) {
            arr[pt][0] = Po[i] + Po[j] + Po[l] + Po[m] + Po[p] +Po[q] + Po[r] + Po[s];
            arr[pt++][1] = Sa[i] + Sa[j] + Sa[l] + Sa[m] + Sa[p] + Sa[q] + Sa[r] + Sa[s];
          }
          }
          }
          }
          }
        }
      }
    }
    for(int i=0;i<k;i++) {
      for(int j=i+1;j<k;j++) {
        for(int l=j+1;l<k;l++) {
          for(int m=l+1;m<k;m++) {
            for(int p=m+1;p<k;p++) {
              for(int q=p+1;q<k;q++) {
                for(int r=q+1;r<k;r++) {
                  for(int s=r+1;s<k;s++) {
                    for(int u=s+1;u<k;u++) {
            arr[pt][0] = Po[i] + Po[j] + Po[l] + Po[m] + Po[p] +Po[q] + Po[r] + Po[s] + Po[u];
            arr[pt++][1] = Sa[i] + Sa[j] + Sa[l] + Sa[m] + Sa[p] + Sa[q] + Sa[r] + Sa[s] + Sa[u];
          }
          }
          }
          }
          }
          }
        }
      }
    }/*
    if(k==10) {
    arr[pt][0] = Po[0] + Po[1] + Po[2] + Po[3] + Po[4] +Po[5] + Po[6] + Po[7] + Po[8] + Po[9];
    arr[pt++][1] = Sa[0] + Sa[1] + Sa[2] + Sa[3] + Sa[4] + Sa[5] + Sa[6] + Sa[7] + Sa[8] + Sa[9];
    }
    if(f==1||n==1) {
    for(int i=0;i<pt;i++) {
      if(arr[i][0]*Ma[0]>=Di[0]) {
        if(arr[i][1]<cost)
          cost = arr[i][1];
      }
    }
    if(cost==INT_MAX)
      cost = -1;
    cout<<cost<<endl;
  }
  else {*/
    int cost = INT_MAX;
    for(int j=0;j<pt;j++) {
      int dishes = arr[j][0];
      int serve=0,f=0;
      int miin = 1;
      //cost=INT_MAX;
      for(int i=0;i<n;i++) {
        if(dishes-serve>=Wt[i].second) {
          serve += Wt[i].second;
        }
        else {
          miin++;
          int rem = dishes-serve;
          int bac = Wt[i].second - rem;
          int mm = bac/dishes;
          miin += mm;
          serve = bac%dishes;
          if(miin>Wt[i].first) {
            f=1;
          }
        }
      }
      if(f==0) {
        if(arr[j][1]<cost)
          cost = arr[j][1];
      }
    }
    if(cost==INT_MAX)
      cost = -1;
    cout<<cost<<endl;
  }
//}
  return 0;
}
