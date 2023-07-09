#include <bits/stdc++.h> 

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	int sum1=0;
	int x=1;
	for(int i=n-1;i>=0;i--){
		sum1=a[i]*x+sum1;
		x=x*10;
	}

	int sum2=0;
	int y=1;
	for(int i=m-1;i>=0;i--){
		sum2=b[i]*y+sum2;
		y=y*10;
	}

	sum1=sum1+sum2;
	vector<int> result;

	 while (sum1 > 0) {
        int digit = sum1 % 10;
        result.push_back(digit);
        sum1 /= 10;
    }

    // Reverse the order of digits
    reverse(result.begin(), result.end());

    return result;

}