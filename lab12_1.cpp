#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double []);

int main()
{
    double A[] = {1.2,-3.5,6.9,7.8,12.5,-0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[4];
    stat(A,N,B);
    cout << "Average = " << B[0];
    cout << "\nS.D. = " << B[1];
    cout << "\nMax = " << B[2];
    cout << "\nMin = " << B[3];
    return 0;
}

//Write definition of stat() here
void stat(const double d[],int N,double f[]){
    double sum=0,sum2=0;
    
	for(int i= 0;i<N;i++) {
		sum += d[i]; 
		sum2 += pow(d[i],2) ;
	}
    
    double max=d[0],min=d[0];
	for(int i= 0;i<N;i++) {
		if(max<=d[i]) max=d[i];
		if(min>=d[i]) min=d[i];
    }
    
    f[0] = sum/N;
    f[1] = sqrt(((1/(double)N)*sum2)-pow(f[0],2));
    f[2] = max;
    f[3] = min;
}
