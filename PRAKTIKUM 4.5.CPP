#include <iostream.h>
#include <conio.h>

main(){
	int a;

	cout<<"Masukkan bilangan : "; cin>>a;

   switch(a){
   	case 1 : cout<<"Hari ke "<<a<<" : Minggu";
      		break;
      case 2 : cout<<"Hari ke "<<a<<" : Senin";
      		break;
      case 3 : cout<<"Hari ke "<<a<<" : Selasa";
      		break;
      case 4 : cout<<"Hari ke "<<a<<" : Rabu";
      		break;
      case 5 : cout<<"Hari ke "<<a<<" : kamis";
      		break;
      case 6 : cout<<"Hari ke "<<a<<" : jumat";
      		break;
      case 7 : cout<<"Hari ke "<<a<<" : sabtu";
      		break;
      	default : cout<<"Tidak terdapat hari ke "<<a;}
      getch();}

