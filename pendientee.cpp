#include <iostream>
#include <complex>

using namespace std;
template <class punto>

inline void puntos(punto& x)
{
	cin>>x;
}
template <class punto>
inline void pendiente(punto& x1,punto& y1,punto& x2,punto& y2, punto& pendie)
{
	pendie=(y2-y1)/(x2-x1);
}

int main (void)
{
	double x1=0,x2=0,y1=0,y2=0,pendi=0;//declaracion de variables
	/*pedir puntos---------------------------------------------------------------*/
	cout<<"ingrese la coordenada x del primer punto"<<endl;
	puntos(x1);
	cout<<endl<<"ingrese la coordenada y del primer punto"<<endl;
	puntos(y1);
	
	cout<<endl<<"ingrese la coordenada x del segundo punto"<<endl;
	puntos(x2);
	cout<<endl<<"ingrese la coordenada y del segundo punto"<<endl;
	puntos(y2);
	
	pendiente(x1,x2,y1,y2,pendi);
	cout<<endl<<"la pendiente es:"<<pendi<<endl;
	
	return 0;
	
}