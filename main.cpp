#include <iostream>
#include <cmath>
#include <complex>
using namespace std;

int main()
{
    int a,b,c;
    int nRoots;
    int value;
    bool isDone=false;
    complex<float> firstRoot=4+1i;
    complex<float> secondRoot=2i;
    while(isDone==false){

    cout << "\nenter the coefficient of the following variables:\nax^2+bx+c=0\na=";
    cin >> a;
    cout << "\nb=";
    cin >> b;
    cout << "\nc=";
    cin >> c;
    nRoots= ( pow(b,2) - (4 * a * c) );
    if(nRoots==0){
        cout << "the root of equation is : ";
        cout<< ( -b + sqrt(pow(b,2) - ( 4 * a * c)) ) / (2 * a) <<  endl;
    }
    else if(nRoots>0){
        cout << "the roots of the equation are:\n1) ";
        cout<< ( -b + sqrt(pow(b,2) - ( 4 * a * c)) ) / (2 * a) <<  endl;
        cout<< "2) " << ( -b - sqrt(pow(b,2) - ( 4 * a * c)) ) / (2 * a) <<  endl;
    }
    else if(nRoots<0)
    {

        cout << complex<double>(sqrt(pow(b,2) - ( 4 * a * c))) << endl << "2) " <<  endl;

    }

    }
    return 0;
}
