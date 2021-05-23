#include <math.h>
#include "dod.h"
#include "sum.h"
#include "var.h" 
using namespace nsDod;
using namespace nsVar;

void nsSum::sum() {
	n = 0;
	an = 1;
	S = 0.0;
	while (fabs(an) >= e) {
		S += an;
		n++;
		dod(); // виклик процедури обчислення 
	} 
}