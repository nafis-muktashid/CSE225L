#ifndef CIRCLE_H_INCLUDED
#define CIRCLE_H_INCLUDED

//Class name must be constructor same but the file name
//not need to be same.
class CIRcle{
private:
    double rad;
public:
    CIRcle();
    CIRcle(double);
    double getArea();
    double getPoridhi();
    double getRad();
    double getDiameter();
    void setRad(double);

};


#endif // CIRCLE_H_INCLUDED
