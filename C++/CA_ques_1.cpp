#include <iostream>
#include <cmath>
using namespace std;

int areaOfTringle(int a, int &b, int &c){
    int s = (a + b + c) / 2;
    int x=sqrt(s*(s-a)*(s-b)*(s-c));
    
    return x;
}

int areaOfRectangle(int* length, int* breath){
	
	int y=(*length)*(*breath);

	return y;
}
int areaOfSquare(int lengthsquar){
	
	int z=lengthsquar*lengthsquar;
	
	return z;
}
int main() {
	int a=20;
	int b=40;
	int c=56;
	int length=10;
	int breath=40;
	int area;
	int lengthsquar=5;

	cout <<"Area of Tringle: " << areaOfTringle(a, b, c);
	cout <<endl<<"Area of Rectangle: " << areaOfRectangle(&length, &breath);
	cout <<endl<<"Area of Square : " << areaOfSquare(lengthsquar);
	
	return 0;
}