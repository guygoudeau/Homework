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
	
	Vectors <int> twoAdded = TwoD1+TwoD2;
	Vectors <int> twoSubbed = TwoD1.threeSub(TwoD2);
	Vectors <int> threeAdded = ThreeD1.threeAdd(ThreeD2);
	Vectors <int> threeSubbed = ThreeD1.threeSub(ThreeD2);
	int twoMag1 = TwoD1.twoMagnitude();
	int twoMag2 = TwoD2.twoMagnitude();
	int threeMag1 = ThreeD1.threeMagnitude();
	int threeMag2 = ThreeD2.threeMagnitude();
	Vectors <int> twoNorm1 = TwoD1.twoNormalize();
	Vectors <int> twoNorm2 = TwoD2.twoNormalize();
	Vectors <int> threeNorm1 = ThreeD1.threeNormalize();
	Vectors <int> threeNorm2 = ThreeD2.threeNormalize();
	Vectors <int> vec4Norm = Vec4.v4Normalize();
	int TwoDot = TwoD1*TwoD2;
	int ThreeDot = ThreeD1.threeDotProd(ThreeD2);
	Vectors <int> twoCross = TwoD1.twoCrossProd(TwoD2);
	Vectors <int> threeCross = ThreeD1.threeCrossProd(ThreeD2);
	
	cout << "2D vectors being used: " << endl;
	TwoD1.twoPrint();
	TwoD2.twoPrint();
	cout << "3D vectors being used: " << endl;
	ThreeD1.threePrint();
	ThreeD2.threePrint();
	cout << "4D vector being used: " << endl;
	Vec4.fourPrint();
	cout << endl;

	cout << "Add 2D vectors: ";
	twoAdded.twoPrint();
	cout << "Subtract 2D vectors: ";
	twoSubbed.twoPrint();
	cout << "Add 3D vectors: ";
	threeAdded.threePrint();
	cout << "Subtract 3D vectors: ";
	threeSubbed.threePrint();
	cout << "Magnitude of first 2D vector: " << twoMag1 << endl;
	cout << "Magnitude of second 2D vector: " << twoMag2 << endl;
	cout << "Magnitude of first 3D vector: " << threeMag1 << endl;
	cout << "Magnitude of second 3D vector: " << threeMag2 << endl;
	cout << "Normalized first 2D vector: ";
	twoNorm1.twoPrint();
	cout << "Normalized second 2D vector: ";
	twoNorm2.twoPrint();
	cout << "Normalized first 3D vector: ";
	threeNorm1.threePrint();
	cout << "Normalized second 3D vector: ";
	threeNorm2.threePrint();
	cout << "Normalized 4D vector: ";
	vec4Norm.fourPrint();
	cout << "Dot product of 2D vectors: " << TwoDot << endl;
	cout << "Dot product of 3D vectors: " << ThreeDot << endl;
	cout << "Cross product of 2D vectors: ";
	twoCross.twoPrint();
	cout << "Cross product of 3D vectors: ";
	threeCross.threePrint();
	cout << degrees << " degrees converted to radians: " << degToRad(degrees) << endl;

	Vectors <float> dickbutt(0, 0);
	dickbutt.x = dickbutt.lerp(TwoD1.x, TwoD2.x, .5);
	dickbutt.y = dickbutt.lerp(TwoD1.y, TwoD2.y, .5);
	cout << "Lerp of 2D vectors: ";
	dickbutt.twoPrint();

	Vectors <float> bickdutt(0, 0, 0);
	bickdutt.x = bickdutt.lerp(ThreeD1.x, ThreeD2.x, .5);
	bickdutt.y = bickdutt.lerp(ThreeD1.y, ThreeD2.y, .5);
	bickdutt.z = bickdutt.lerp(ThreeD1.z, ThreeD2.z, .5);
	cout << "Lerp of 3D vectors: ";
	bickdutt.threePrint();
	cout << endl;

	Node A(69);
	Node B(420);
	Node C(13);

	A.Next(B);
	B.Prev(A);
	B.Next(C);

	A.Read(A);

	system("pause");
	return 0;
}