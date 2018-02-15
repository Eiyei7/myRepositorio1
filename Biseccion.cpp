#include <iostream>
#include <conio.h>
#include <String.h>
#include <windows.h>
#include <math.h>
#include <cctype>

using namespace std;

void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 }

int main(){
	int i,z;
	double a, b, xa, xb, fxa, fxb, xr, fxr, fxu, er;
	system ("color f5");
	int c;
	char res;
	do{
	system("cls");
 	for(c=0; c<=120; c++){
 		gotoxy(0+c,1); cout<<"_";
 		gotoxy(0+c,28); cout<<"_";
 		gotoxy(40,2); cout<<"<< Universidad Politecnica De Pachuca >>";
	 }
	 for(c=0; c<=26; c++){
	 	gotoxy(1,2+c); cout<<"|";
 		gotoxy(118,2+c); cout<<"|";
 		gotoxy(40,26); cout<<"Angel de Jesus Taboada Valencia";
	}
gotoxy(20,5);cout<<"M E T O D O   D E  B I S E C C I O N";

gotoxy(3,7);cout<<"Ingrese limite inferior -->";
gotoxy(3,8);cout<<"Ingrese limite superior -->";
gotoxy(3,10);cout<<"Numero de interaciones -->";
gotoxy(40,7);cin>>a;
gotoxy(40,8);cin>>b;
gotoxy(40,10);cin>>i;	
 if(a>b){
 	cout<<"El limite inferior es mayor al limite superior, ERROR... ";
}else{

 if(a!=b){
   	system("cls");
   	for(c=0; c<=120; c++){
 		gotoxy(0+c,1); cout<<"_";
 		gotoxy(0+c,28); cout<<"_";
 		gotoxy(40,2); cout<<"<< Universidad Politecnica De Pachuca >>";
	 }
	 for(c=0; c<=26; c++){
	 	gotoxy(1,2+c); cout<<"|";
 		gotoxy(118,2+c); cout<<"|";
 		gotoxy(40,26); cout<<"Angel de jesus Taboada Valencia";
	}
   	for(z=1;z<=i;z++){
     	xa=a;
   	    xb=b;
   	    fxa=sin(a*3.14159/180)+2*(a)-1;
   	    fxb=sin(b*3.14159/180)+2*(b)-1;
   	    xr=(xa+xb)/2;
   	    fxr=sin(xr*3.14159/180)+2*(xr)-1;
   	    fxu=fxa*fxb;
   	    gotoxy(2,4);cout<<"#N";
   	    gotoxy(2,5+z*2);cout<<z;
   	    gotoxy(8,4);cout<<"Xa";
   	    gotoxy(8,5+z*2);cout<<xa;
		gotoxy(15,4);cout<<"Xb";
   	    gotoxy(15,5+z*2);cout<<xb;
   	    gotoxy(24,4);cout<<"F(xa)";
   	    gotoxy(22,5+z*2);cout<<fxa;
		gotoxy(34,4);cout<<"F(xb)";
   	    gotoxy(33,5+z*2);cout<<fxb;
   	    gotoxy(48,4);cout<<"Xr";
   	    gotoxy(48,5+z*2);cout<<xr;
        gotoxy(58,4);cout<<"F(xr)";
        gotoxy(58,5+z*2);cout<<fxr;
        gotoxy(69,4);cout<<"F(xa) * F(xb)";
        gotoxy(71,5+z*2);cout<<fxu;
        if(fxu<0){
    	    b=xr;
    	}
    	else{
		    a=xr;
    	}
   }
   gotoxy(3,22);cout<<"Xr=";cout<<xr;
   er=(xb-xa)/pow(2,i);
   gotoxy(20,22);cout<<"Er=";cout<<er;
   
 }
 else{
   gotoxy(3,10);cout<<"No se puede realizar metodo de biseccion";
  	
 }}
 getch();
  gotoxy(3,24);cout<<"\n Desea realizar repetir el proceso [s/n]";
	cin>>res;
}while(res=='s');

}
