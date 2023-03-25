#include <iostream>
#include <stack>
using namespace std;

int main() {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		string A;
		stack <char> vps;
		bool iserror = false;
		cin >> A;
		for (int j = 0; j < A.size(); j++) {
			
			if (A[j] == '(')
				vps.push(A[j]);
			else {
				if (vps.empty() || vps.top()!='(') {
					iserror = true;
					break;
				}
				vps.pop();
			}
		}
		if (!vps.empty() || iserror==true)
			cout << "NO" << endl;
		else {
			cout << "YES" << endl;
		}
	}
	return 0;
}