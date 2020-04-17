//Create a class called Box(), that carries three data,length=l weight=w and hight=h. Create another class called area() that can calculate the volume of a box with its own function called volume(). Now inherit class to Box() to class area(). Then create an object of the class area and show the volume of Box.//
#include<stdio.h>
using namespace std;
class box
{
int l,w,h;
box;
public:
    box(int l,int w,int h)
};
class Area : public box()
{
public:
    int Volume();
    v=l*w*h;
};
int Area :: Volume (int v)
{
    v=l*w*h;
}
int main ()
{
    Area obj;
    obj.set_i(2);
    obj.set_j(2);
    obj.set_k(2);
    cout<<"obj.Volume"<<endl;
    return 0;
}
