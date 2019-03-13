#include <iostream>
#include <math.h>
using namespace std;

class vetor2d{
     private:
    float x,y;
public:
    void setX(float _x){
        x = _x;
    }
    float getX(void){
        return x;
    }
    void setY(float _y){
        y = _y;
    }
    float getY(void){
        return y;
    }
    float modulo(void){
        float r;
        r = sqrt(pow(x,2)+pow(y,2));
        return r;
    }
    float angulo(void){
        return (atan(y/x)*180)/(3.14);
    }
    void imprimir(){
        cout<< "("<<x<<", "<<y<<")";
    }

    void unitario(){
        float xu,yu;
        xu = x/modulo();
        yu = y/modulo();
        cout << "("<<xu<<","<<yu<<")";
    }
};
int main(int argc, char *argv[])
{
    vetor2d v;
    v.setX(3);
    v.setY(4);
    cout<< "Vetor= ";
    v.imprimir();
    cout<<endl;
    cout<< "Vetor unitario= ";
    v.unitario();
    cout<<endl;
    cout << "norma= "<< v.modulo() << endl;
    cout << "angulo= "<< v.angulo() << endl;
   //cout << "unitario "<< v.unitario() << endl;

   cout<<endl;



    return 0;
}
