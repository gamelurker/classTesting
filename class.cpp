#include "iostream"
using namespace std;
class Vector3
{
	int x, y, z;
public:
	Vector3(){
	}
	Vector3(int x, int y, int z) : x(x), y(y), z(z)
	{}
	Vector3 operator = (Vector3 v1){
		return Vector3(this->x = v1.x, this->y = v1.y, this->z = 0 );
	}
};
int main(){
Vector3 v1(1,2,3), v2(0,0,0), v3();
v3 = v1;
cout << v3(); 
}

