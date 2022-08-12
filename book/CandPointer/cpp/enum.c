#include <stdio.h>

enum Day{
	MON = 1, TUE, WED, THU, FRI, SAT, SUN
};

int main()
{
	enum Day day;
	day = SUN;
	printf("%d\n", day);
	return 0; 	
}
