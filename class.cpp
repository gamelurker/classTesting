#include "iostream"
using namespace std;
class A
{
public:
	A(){
		cout << " в деструктор вошёл";
	}
	 void a (){ cout << "a";
	 }
};
class  B{
public: 
	void b(){cout << "b";
	}
};
int main(){
A b;

}

