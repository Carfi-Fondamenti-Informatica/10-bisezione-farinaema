#include <iostream>
#include <cmath>

float function( float y ){
    float f;
    f = ((powf(y, 2)*cosf(y))+1);
    return f;
}

int main(){

    float a=0, b=0, x, err;

    do{
        std::cout << "inserire estremi" << std::endl;
        std::cin >> a >> b;

    } while ((function(a)*function(b))>=0);

    do {

        x=(a+b)/2;

        if(function(x)==0) {

            break;

        }

        if (function(a)* function(b)<0){

            b=x;

        } else {

            a=x;
        }

        err=std::abs(((b-a)/2));

    } while(err >= (1e-6));

        std::cout << x << std::endl;
        return 0;
}
