#include <stdio.h>
#include <math.h>

//�x�N�g���̒�`
struct Vector3D{
	double x;
	double y;
	double z;
};

//�P�ʃx�N�g�����v�Z����
void main( Vector3D v ) {
	//�x�N�g���̒���
	double length = pow( ( v.x * v.x ) + ( v.y * v.y ) + ( v.z * v.z ), 0.5 );

	//XYZ�e�����𒷂��Ŋ���
	Vector3D unit;
	unit.x = v.x / length;
	unit.y = v.y / length;
	unit.z = v.z / length;

	return unit;
}
