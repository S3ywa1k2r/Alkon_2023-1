//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//	int N,M,cnt=0;
//	vector <int> A,ban;
//	cin >> N >> M;
//	for (int i = 0; i < N; i++) {
//		int input;
//		cin >> input;
//		A.push_back(input);
//	}
//	for (int i = 1; i <= N; i++) {
//		for (int start = 0; start < N; start++) {
//			if (start + i > N)
//				break;
//			int sum=0;
//			for (int k = 0; k < ban.size(); k++) {
//				if (start == ban[k])
//					start++;
//			}
//			int end = start + i-1;
//			if (end > N - 1)
//				break;
//			for (int j = start; j <= end; j++) {
//				sum += A[j];
//			}
//			
//			if (sum == M) {
//				ban.push_back(start);
//				cnt++;
//			}
//			else if (sum > M)
//				ban.push_back(start);
//			
//		} 
//	}
//	cout << cnt;
//	return 0;
//}

/*#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, M, cnt = 0;
	vector <int> A;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		int input;
		cin >> input;
		A.push_back(input);
	}
	for (int i = 0; i < N; i++) {
		int sum=0;
		for (int j = i; j < N; j++) {
			sum += A[j];
			if (sum == M)
				cnt++;
		}
	}
	cout << cnt;
	return 0;
}*/ // O(n^2)

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, M, cnt = 0;
	int start=0, end=0,sum=0;
	vector <int> A;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		int input;
		cin >> input;
		A.push_back(input);
	}
	while (true) {
		if (sum >= M) {
			sum -= A[start];
			start++;
		}
		else if (sum < M) {
			if (end == N)
				break;
			sum += A[end];
			end++;
		}
		if (sum == M) {
			cnt++;
		}
	}
	cout << cnt;
	return 0;
} // O(n)