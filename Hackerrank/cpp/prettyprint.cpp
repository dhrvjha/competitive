#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;
        int a = (int)A;
        printf("0x%x\n",a);
        int b = B;
        int cou = 0;
        while (b > 0){
            cou++;
            b/=10;
        }
        cou = 15- (cou+4);
        while(cou--)
            printf("_");
        if (B>0)
            printf("+");
        else
            printf("-");
        printf("%.2f\n",B);

        int c = C;
        cou = 0;
        while (c>10){
            cou++;
            c/=10;
            C/=10;
        }
        printf("%.9fE+0%d\n",C,cou);
	}
	return 0;
}
