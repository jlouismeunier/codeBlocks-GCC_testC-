#include <iostream>
#include <math.h>
#include <conio.h>

#define PI 3.14159265358979224

double Sinus(double X) {
    double R=X*X,S=42.0;
    for(int I=10;I>=1;I--) S=4.0*I-2.0+(-R)/S;
    return 2.0*X*S/(R+S*S);
}

int main()
{
    double I=0;
    while(I<PI) {
        std::cout << "Sinus " << I << "     " << sin(I) << std::endl;
        I+=0.01;
    }
    getch();
     return 0;
}
