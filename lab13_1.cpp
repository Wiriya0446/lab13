#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}
void stat(const double x[],int y,double z[]){
    double sum1=0,sum2=0,sum3=1,sum4=0,sum5,num;
    int i=0;
    z[4]=x[0];
    while(i<y){
        sum1+=x[i];
        sum2+=pow(x[i],2);
        sum3*=x[i];
        sum4+=(1/x[i]);
        if(z[4]>x[i]){
            z[4]=x[i];
        }
        if(z[5]<x[i]){
            z[5]=x[i];
        }
        i++;
    }
    z[0]=sum1/y;
    sum5=y*pow(z[0],2);
    z[1]=pow((sum2-sum5)/y,0.5);
    z[2]=pow(sum3,1.0/y); 
    z[3]=y/sum4;
    num =z[5];
    z[5]=z[4];
    z[4]=num;
}