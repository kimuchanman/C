#include <stdio.h>
#include <math.h>

//ベクトルの定義
struct Vector3D{
	double x;
	double y;
	double z;
};

//単位ベクトルを計算する
void main( Vector3D v ) {
	//ベクトルの長さ
	double length = pow( ( v.x * v.x ) + ( v.y * v.y ) + ( v.z * v.z ), 0.5 );

	//XYZ各成分を長さで割る
	Vector3D unit;
	unit.x = v.x / length;
	unit.y = v.y / length;
	unit.z = v.z / length;

	return unit;
}
