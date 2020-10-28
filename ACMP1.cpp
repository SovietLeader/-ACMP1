// Задаются координаты центрв и радиусы окружностей, определить, пересекаются ли они 
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	long doule x1, y1, x2, y2, r1 ,r2; cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
	long doule;
	a = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	if ((r1 + r2) >= a) cout << "YES";
	else cout << "NO";

	return(0);
}
