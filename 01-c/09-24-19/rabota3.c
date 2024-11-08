#include "stdio.h"
#include "math.h"
#define M_PI 3.14159265358979323846
#define M_PI_2 1.57079632679489661923
int main(){
	double x,y,z;
	printf("x=");
	scanf("%lf",&x);
	printf("y=");
	scanf("%lf",&y);
	printf("z=");
	scanf("%lf",&z);
	if (cos(z)==0){
		printf("error");
		return 0;
	}
	else{	
	double res1=fabs(x-y);
	double res2=pow(res1,2);
	double res3=8+res2+1;
	double res4=cbrt(res3);
	double res5=pow(x,2)+pow(y,2)+2;
	double res6=res4/res5;
	double res7=pow(tan(z),2)+1;
	double res8=pow(res7,x);
	double res9=fabs(x-y);
	double res10=exp(res9);
	double res11=res10*res8;
	double res12=res6-res11;
	printf("x=%lf, y=%lf, z=%lf:\nu=%lf\n",x,y,z,res12);
	}
	return 0;
}
