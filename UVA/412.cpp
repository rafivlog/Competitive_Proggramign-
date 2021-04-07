/// Bismillahir Rahmaneer Rahim...
#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    if(b == 0)
        return a;
    return gcd(b, a % b);
}
int main(){
    int n, A[50], i, j;
    while(1) {
        cin>>n;
        if(n<=1 || n>=50)break;
        for(i = 0; i < n; i++)
            scanf("%d", &A[i]);
        int fa__ma = n*(n-1)/2;
        int rafi = 0;
        for(i = 0; i < n; i++) {
            for(j = i+1; j < n; j++)
                if(gcd(A[i], A[j]) == 1)
                    rafi++;
        }
        if(!rafi)
            cout<<"No estimate for this data set."<<endl;
        else{
            double ans = sqrt((double)6*fa__ma/rafi);
            printf("%.6lf\n", ans);
        }
    }
    return 0;
}
