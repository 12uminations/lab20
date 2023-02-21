#include<iostream>
#include<cmath>
using namespace std;

struct Rect{
	double x,y,w,h;
};

#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect r1,Rect r2){
	double x = min(r1.x+r1.w,r2.x+r2.w)-max(r1.x,r2.x);
	double y = min(r1.y,r2.y)-max(r1.y-r1.h,r2.y-r2.h);
	if(x < 0 or y < 0) return 0;
	else return x*y;

}
int main(){
	Rect R1 = {1,1,5,5};
Rect R2 = {2,2,5,5};	
cout << overlap(R1,R2);	
}
