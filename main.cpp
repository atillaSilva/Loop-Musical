#include<iostream>
using namespace std;

int main(){
	int n;
	int *h;
	while(cin >> n && n != 0){
		h = new int[n];
		int picos = 0;
		for(int a = 0; a < n; a++){
			cin >> h[a];
		}
		for(int b = 1; b < n; b++){
				if(h[b] < h[b-1] && h[b] < h[(b+1)%n])
					picos++;
				else if(h[b] > h[b-1] && h[b] > h[(b+1)%n])
					picos++;
		}
		if(h[0] < h[n-1] && h[0] < h[1])
			picos++;
		else if(h[0] > h[n-1] && h[0] > h[1])
			picos++;
		cout << picos << endl;
	}
}
