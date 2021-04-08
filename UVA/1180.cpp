/// Bismillahir Rahmaneer Raheem...
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    scanf("%d\n",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d,\n",&a);
        if( a == 2 || a == 3 || a == 5 || a == 7 || a == 13 || a == 17 || a == 19 )
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}

//এই সব Prime number দিয়ে perfect number generate করা যায়//
/*
2, 3, 5, 7, 13, 17, 19, 31, 61, 89, 107, 127, 521, 607, 
1279, 2203, 2281, 3217, 4253, 4423, 9689, 9941, 11213, 
19937, 21701, 23209, 44497, 86243, 110503, 132049, 216091,
756839, 859433, 1257787, 1398269, 2976221, 3021377, 6972593,
13466917, 20996011, 24036583, 25964951, and 30402457*/ 
