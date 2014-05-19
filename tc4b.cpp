#include<iostream>
using namespace std;


int main ()


{

cout<<"Selamat datang pada program tiket kereta api"<<endl;

    int a;
    int b;
    int c;

cout<<"Input jadwal keberangkatan anda:"<<endl;
cout<<"tgl   : ";
cin>>a;
cout<<"jam   : ";
cin>>b;
cout<<"menit : ";
cin>>c;

float d;
if (a>=1 and a<=15) {d=0.5;} else if(a>=16 and a<=20) {d=0.75;} else if (a>20 and a<=31) {d=1;}

cout<<"Harga tiket kereta api anda adalah : "<<d*225000<<" rupiah"<<endl;
cout<<"Anda akan sampai di tujuan pada:"<<endl;

int p;
int q;
int r;
float e;
q=b+8;
if(b<16) {p=a;} else if(b>16) {p=a+1;}
cout<<"tgl   : "<<p<<endl;
if(b<16) {q=q;} else if (b>16) {q=b-16;} else if (c>35) {q=q+9;}
cout<<"jam   : "<<q<<endl;
if(c<35) {r=25+c;} else if (c>35) {r=c-35;}
cout<<"menit : "<<r<<endl;

cout<<"Terima kasih telah menggunakan program tiket kereta api ini!"<<endl;

return 0;


}
