/// Bismillahir Rahmaneer Raheem...
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    while(cin>>str)
    {
        int c=0;
        for (int i = 0; i<str.size(); i++){
            if (str[i] >= 'a' && str[i] <= 'z')
                c += str[i]-'a'+1;
            else
                c += str[i]-'A'+27;
        }
        //cout<<c<<endl;
        if(c<=2){
            printf("It is a prime word.\n");
        }
        else if (c% 2 == 0){
            printf("It is not a prime word.\n");
        }
        else{
            bool flag = false;
            for(int i=3; i*i<=c; i++){
                if(c%i==0){
                    printf("It is not a prime word.\n");
                    flag = true;
                    break;
                }
            }
            if(!flag){
                printf("It is a prime word.\n");
            }
        }
    }
    return 0;
}
