#include<iostream>
#include<iomanip>
using  namespace std;

int main()
{
////Problema 10-Capitulo 8
  float c;
	 cout<<"    Celcius Fharenheit "<<endl;
	   cout<<"  ------  ----------  "<<endl;
	  
	   for(float f=0;f<=20;f=f+2){
	       c=(5.0/9.0)*(f-32);
	       cout<<setw<<(3)<<"  "
	           <<setw<<(3)<<c<<"   "
	           <<setw<<(4)<<f<<endl;
	           ////Si funciona pero muestra valores alado en teoria esta bien el codigo
	           
	   }
	   
 float f2;
cout<<" Fharenheit Celcius"<<endl;
cout<<" ---------  -------  "<<endl;
for(float c2=50;c2<=100;c2=c2+5){
f2=(9*c2)/5+32;
 cout<<setw<<(3)<<"  "
	           <<setw<<(3)<<f2<<"   "
	           <<setw<<(4)<<c2<<endl;
}
}

