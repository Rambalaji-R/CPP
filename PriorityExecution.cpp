#include<bits/stdc++.h>
using namespace std;
int execution(int n,vector<int>p,vector<int>ext,vector<int>exe){
	int sum=0,remsum=0;
	if(exe[0]!=0){
		sum+=exe[0];
	}
	for(int i=0;i<n;i++){
		int k=i;
		if(k==n-1){
			sum+=ext[k];
			break;
		}
		if(exe[k]==exe[k+1]){
			sum+=ext[k];
		}
		else{
			int t=ext[k]+exe[k];
			if(t<=exe[k+1]){
				sum+=ext[k];
			}
			else{
				if(p[k]<p[k+1]){
					int d=exe[k+1]-exe[k];
					sum+=d;
					remsum+=ext[k];
				}
				else{
					sum+=ext[k];
				}
			}
		}
	}
	sum+=remsum;
	return sum;
}
int main(){
	int n,a;
	vector<int>p;
	vector<int>ext;
	vector<int>exe;
	cin>>n;
//6
//1 1 1 2 1 2
//1 1 1 2 3 2
//0 0 2 2 5 7
	for(int i=0;i<n;i++){
		cin>>a;
		p.push_back(a);
	}
	for(int i=0;i<n;i++){
		cin>>a;
		ext.push_back(a);
	}
	for(int i=0;i<n;i++){
		cin>>a;
		exe.push_back(a);
	}
//1
//1
//5
//2
	cout<<execution(n,p,ext,exe);

return 0;
}
