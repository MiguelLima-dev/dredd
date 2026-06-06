#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
	
	double angulo, vel, x, y, t = 0;
	cin >> angulo >> vel;
	
	double pi = 3.1415926535897932384626;
	angulo *= pi / 180;
	
	y = vel * t * sin(angulo) - 0.5 * 9.81 * pow(t, 2);
	x = vel * t * cos(angulo);
	while (y > 0 or x == 0){
		y = vel * t * sin(angulo) - 0.5 * 9.81 * pow(t, 2);
		x = vel * t * cos(angulo);
		
		cout << "Tempo de " << fixed << setprecision(1) << t << "s ";
		cout << "(x, y) -> (" << fixed << setprecision(2) << x << " m, " << y << " m)" << endl;
		
		t += 0.5;
	}
	
	return 0;	
}
