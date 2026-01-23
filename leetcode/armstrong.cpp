#include <bits/stdc++.h>
using namespace std;


bool checkArmstrong(int n){
	int dup = n;
	int res=0;
	while (n > 0) {
		int a = n % 10;
		res=res + a*a*a;
		n = n / 10;
  	}
        if (res == dup) {
                return 1;
        }else{
			return 0;
		}
		
}

int main(){
    printf("%d",checkArmstrong(153));
    printf("%d",checkArmstrong(1));
    printf("%d",checkArmstrong(1634));

}

