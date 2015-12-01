//Guy Goudeau
//gg1126
//Oct 19, 2015
#include <iostream>
#include "Header.h"
using namespace std;


int main()
{
	Vectors <int> TwoD1(6, 9);
	Vectors <int> TwoD2(9, 6);
	Vectors <int> ThreeD1(4, 50, 6);
	Vectors <int> ThreeD2(4, 2, 14);
	Vectors <int> Vec4(25, 30, 35, 255);
	int degrees = 360;
	
	Vectors <int> twoAdded = TwoD1.twoAdd(TwoD2);
	Vectors <int> twoSubbed = TwoD1.threeSub(TwoD2);
	Vectors <int> threeAdded = ThreeD1.threeAdd(ThreeD2);
	Vectors <int> threeSubbed = ThreeD1.threeSub(ThreeD2);
	int twoMag = TwoD1.twoMagnitude();
	int threeMag = ThreeD1.threeMagnitude();
	Vectors <int> twoNorm = TwoD1.twoNormalize();
	Vectors <int> threeNorm = ThreeD1.threeNormalize();
	Vectors <int> vec4Norm = Vec4.v4Normalize();
	int TwoDot = TwoD1.twoDotProd(TwoD2);
	int ThreeDot = ThreeD1.threeDotProd(ThreeD2);
	Vectors <int> twoCross = TwoD1.twoCrossProd(TwoD2);
	Vectors <int> threeCross = ThreeD1.threeCrossProd(ThreeD2);
	
	cout << "Add 2D vectors: ";
	twoAdded.twoPrint();
	cout << "Subtract 2D vectors: ";
	twoSubbed.twoPrint();
	cout << "Add 3D vectors: ";
	threeAdded.threePrint();
	cout << "Subtract 3D vectors: ";
	threeSubbed.threePrint();
	cout << "Magnitude of 2D vector: " << twoMag << endl;
	cout << "Magnitude of 3D vector: " << threeMag << endl;
	cout << "Normalized 2D vector: ";
	twoNorm.twoPrint();
	cout << "Normalized 3D vector: ";
	threeNorm.threePrint();
	cout << "Normalized 4D vector: ";
	vec4Norm.fourPrint();
	cout << "Dot product of 2D vectors: " << TwoDot << endl;
	cout << "Dot product of 3D vectors: " << ThreeDot << endl;
	cout << "Cross product of 2D vectors: ";
	twoCross.twoPrint();
	cout << "Cross product of 3D vectors: ";
	threeCross.threePrint();
	cout << "Degrees to radians: " << degToRad(degrees) << endl;

	system("pause");
	return 0;
}