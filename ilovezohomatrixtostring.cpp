#include <bits/stdc++.h>

using namespace std;

int main()
{
    char a[5][5]={{'I','L','O','V','E'},
                {'A','T','I','O','Z'},
                {'N','G','H','N','O'},
                {'I','U','O','T','H'},
                {'M','A','X','E','O'}};
    int rs=0,re=4;
    int cs=0,ce=4;
    while(rs<=re && cs<=ce){
        for(int i=cs;i<=ce;i++){
            cout<<a[rs][i]<<" ";
        }
        rs+=1;
        for(int i=rs;i<=re;i++){
            cout<<a[i][ce]<<" ";
        }
        ce-=1;
        for(int i=ce;i>=cs;i--){
            cout<<a[re][i]<<" ";
        }
        re-=1;
        for(int i=re;i>=rs;i--){
            cout<<a[i][cs]<<" ";
        }
        cs+=1;
    }
    

    return 0;
}