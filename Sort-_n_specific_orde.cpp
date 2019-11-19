#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        vector<int> v;
         vector<int> vt;

        int a[n],j=0,i;
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            if(a[i]%2==1)
            {
               v.push_back(a[i]);
            }
            else
              vt.push_back(a[i]);
        }
        sort(v.rbegin(), v.rend());
        sort(vt.begin(), vt.end());
        for(i=0;i<v.size();i++)
        {
            printf("%d ",v[i]);
        }
        for(i=0;i<vt.size();i++)
        {
            printf("%d ",vt[i]);
        }
        printf("\n");

    }
return 0;
}


