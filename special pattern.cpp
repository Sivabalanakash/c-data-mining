#include <iostream>
using namespace std;
int main() {
    int i,j,k,l,n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for (int i=1;i<=n; i++) 
		{
        for (k=1;k<=i;k++) 
			{
           	 cout <<char(k+65-1)<<" " ;
        	}
        for (l=i-1;l>=1; l--) 
			{ 
        		cout <<char(l+65-1)<<" ";
    		}
    	cout<<endl;
	}
    return 0;
}