#include <iostream> 
#include <cmath>

using std::cout;
using std::endl;


int main(){ 

    double x;
    double y;
    double dx;
    double dy;
    srand48(42);
    float r;
    float r2;
    double L;
    double pi=3.1416;
    
    x = 0;
    y = 0;
    int i;
    for (i=0;i<1000;i++)
    {  
        r = drand48();
        r2 = drand48();
           
        dx = 2.0*r-1;
        dy = 2.0*r2-1;
        
        L = sqrt(dx*dx + dy*dy);
        dx = dx/L;
        dy = dy/L;
            
        x = x+dx;
        y = y+dy;
        
        std::cout << x << " " << y << std::endl;
        
    }

    return 0;
}
