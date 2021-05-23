#include <iostream>
#include <math.h>
#include <iomanip>
#include "dod.h"
#include "sum.h"
#include "var.h"
using namespace std;
using namespace nsDod;
using namespace nsSum;
using namespace nsVar;
int main()
{
	cout << "x_p = "; cin >> x_p;
	cout << "x_k = "; cin >> x_k;
	cout << "dx = "; cin >> dx;
	cout << "e = "; cin >> e;
	cout << endl;
	x = x_p;
	for (x = x_p; x <= x_k + e; x += dx) {
		sum(); // виклик процедури обчислення суми
		cout << "====================================================================================================" << endl;
		cout << "x: " << x << endl;
		cout << "S: " << S << endl;
		cout << "cos x: " << cos(x) << endl;
		cout << "x: " << n << endl;
	}
	cin.get();
	return 0;
}