#include "circle.h"

CIRcle::CIRcle(){
    rad = 0;
}

CIRcle::CIRcle(double r){
    rad = r;
}


double CIRcle::getArea(){
    return 3.1416*rad*rad;
}

double CIRcle::getPoridhi(){
    return 2*3.1416*rad;
}

double CIRcle::getDiameter(){
    return 2*rad;
}

double CIRcle::getRad(){
    return rad;
}

void CIRcle::setRad(double r){
    rad = r;
}
