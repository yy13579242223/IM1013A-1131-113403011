#include<stdio.h>
#include<math.h>
#define true 1
#define false 0

int main(void){
    int n;
	// 預先判斷偶數與1，節省一點時間。
	if (n == 2) return true;
	if (n < 2 || n % 2 == 0) return false;

	int u = n - 1, t = 0;
	while (u % 2 == 0) {u >>= 1; t++;}

	// 推定是質數，就實施下一次測試；
	// 確定是合數，就馬上結束。
	int sprp[3] = {2, 7, 61};	// 足以涵蓋int範圍
	for (int k=0; k<3; ++k)
	{
		// 預先判斷底數是否為簡易數字，節省一點時間。
		int a = sprp[k] % n;
		if (a == 0 || a == 1 || a == n-1) continue;

		long long x = pow(a, u, n);
		if (x == 1 || x == n-1) continue;

		for (int i = 0; i < t-1; i++)
		{
			x = mul(x, x, n);
			if (x == 1) return false;
			if (x == n-1) break;
		}
		if (x == n-1) continue;

		return false;
	}
	// 通過全部測試，確定是質數。
	return true;
}