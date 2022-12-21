#include <iostream>
#include <cmath>

double function( double y ){
    double f;
    f = pow(y, 2)*cos(y)+1;
    return f;
}

int main(){

    double a=0, b=0, x, err;

    do{
        std::cout << "inserire estremi" << std::endl;
        std::cin >> a >> b;

    } while ((function(a)*function(b))>=0);

    do {

        x=(a+b)/2;

        if(function(x)==0) {

            std::cout << x << std::endl;
            std::cout << function(x) << std::endl;
            return 0;
        }

        if (function(x)* function(a)<0){

            b=x;

        } else {

            a=x;
        }

        err=std::abs((b-a)/2);

    } while(err >= (1e-6));

        std::cout << x << std::endl;
        return 0;
}
