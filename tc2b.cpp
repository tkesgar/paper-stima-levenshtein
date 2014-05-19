
#include <iostream>
using namespace std;

int main ()

{ cout << " Selamat datang pada program tiket PT KAI " << endl;
 <<endl<<endl;

 cout << " Input jadwal keberangkatan anda "
  << endl ;

  int a;
  int b;
  int c;
  cout << " Tanggal : " ;
  cin >> a;
  cout << " Jam : " ;
  cin >> b;
  cout << " Menit : ";
  cin >> c; cout << endl;

  float d;
  if (a>=1 and a<=15) {d=0.5;} else { if (a>=16 and a<=31) {d=0.75;} else { d=0;}}

  cout << " Harga tiket kereta api anda : Rp" << 22500*d << endl<< endl;

  cout << " Anda akan sampai di tujuan pada "<< endl;
  cout << " Tanggal : " ; if (b-16>=0) {cout <<a+1;} else {cout << a;} ; cout<<endl;
  cout << " Jam : " ; if (c-35>=0 and b+9>=24) {cout << b-15;} else {if (c-35>=0 and b+9<=24) {cout << b+9;} else {cout << b+8;}}
  cout << endl;
  cout << " Menit : " ; if (c+25>=60) {cout << c-35;} else {cout << c+25;};
 cout<< endl<< endl;

  cout << "Terimakasih telah menggunakan program ini.";

 }



