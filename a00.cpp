#include<iostream>

using namespace std;

int main(){
	int T;
	cin >>T;
	while(T--){
		int N;
		cin >> N;
		int a[N];
		int nCount = 0;
		bool flag = true;
		for(int i=0;i<N;i++){
			cin >> a[i];
			if(a[i]<0){
				nCount++;
			}
		}
		for(int i=0;i<N;i++){
			if(nCount>i && a[i]>0){
				a[i] *= -1;
			}
			else if(nCount<=i && a[i]<0){
				a[i] *= -1;
			}
		}
		for(int i=0;i<N-1;i++){
			if(a[i]>a[i+1]){
				flag = false;
			}
		}
		if(flag == false){
			cout << "NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
		}

	}
}