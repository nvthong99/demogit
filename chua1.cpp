#include <iostream>
#include<math.h>
using namespace std;




int main()
{
	int i, j ;
	int m = 11, n = 6;
	for ( i = 1; i <=n; i++){
		for( j = 1; j <= m; j++){
			if(i+j <= m/2+1 || j - i > m/2) cout << "  ";
			else cout <<"1 ";
		}
		cout << endl;
	}
	
	
	
}
//11 12 13 14 15 16 17 18 19 110 111
//21 22 23 24 25 26 27 28 29 210 211
//31 32 33 34 35 36 37 38 39 310 311
//41 42 43 44 45 46 47 48 49 410 411
//51 52 53 54 55 56 57 58 59 510 511
//61 62 63 64 65 66 67 68 69 610 611
