#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	double a, b, c, x1, x2, x0, delta;
	cout << "Postac rownania kwadratowego wynosi: ax^2 + bx + c = 0" << endl << endl;
	cout << "Podaj wspolczynniki a, b, c" << endl;
	cin >> a;
	cin >> b;
	cin	>> c;
	cout << "Postac rownania kwadratowego z uwzglednieniem wartosci wynosi wynosi: " << a << "x^2 + " << b << "x + " << c << " = 0" << endl << endl;
	delta = b * b - 4 * a * c;
	if (delta > 0)
	{
		delta = sqrt(delta);
		x1 = (-b - delta) / (2 * a);
		x2 = (-b + delta) / (2 * a);
		cout << "Rownanie ma dwa pierwiastki: " <<endl<< setprecision(2) <<"x1 = "<< x1 << endl << "x2 = " << x2 << endl << endl;
	}
	else
	{
		if (delta == 0)
		{
			x0 = -b / (2 * a);
			cout << "Rownanie ma jeden pierwiastek: "<<endl << setprecision(2) << "x1 = " << x0 << endl << endl;
		}
		else
		{
			cout << "Rownanie nie ma pierwiastkow";
		}
	}
}
