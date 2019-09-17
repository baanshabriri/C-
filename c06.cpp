#include <iostream>
using namespace std;

class Vector{
	public:
		float x,y,z;
		Vector(){
			x = 0;
			y = 0;
			z = 0;
		}
		Vector(float a, float b, float c){
			x = a;
			y = b;
			z = c;
		}
		void display(){
			cout<<x<<"i + "<<y<<"j + "<<z<<"k\n";
		}
};
Vector operator+ ( Vector p, Vector q ){
	Vector r;
	r.x = p.x + q.x;
	r.y = p.y + q.y;
	r.z = p.z + q.z;
	return r;
}
Vector operator- ( Vector p, Vector q ){
        Vector r;
        r.x = p.x - q.x;
        r.y = p.y - q.y;
        r.z = p.z - q.z;
        return r;
}
float operator* ( Vector p, Vector q ){
        float r;
        r = ((p.x*q.x) + (p.y*q.y) + (p.z*q.z));
        return r;
}

main(){
	Vector ob1(2,3,4), ob2(3,4,5), ob3;
	ob3 = ob1 + ob2;
	ob3.display();
	ob3 = ob1 - ob2;
	ob3.display();
	cout<<"Scalar Product : "<<ob1*ob2;
}
	
