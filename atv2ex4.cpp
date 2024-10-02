#include <iostream>
#include <cmath>

using namespace std;

void Area_Volume (double r, double *a, double *v){
    double p = 3.14159;

    *a = 4 * p * pow(r,2);

    *v = (4.0/3.0) * p * pow(r,3);

}

int main (){
    double r;
    double a, v;

    cin >> r;

    Area_Volume(r, &a, &v);

    printf("%lf %lf\n", a, v);

    return 0;
}

