#include<iostream>
using namespace std;


int main ()


{

cout<<"Selamat datang pada program tiket PT KAI"<<endl;

    int a, b, c;

cout<<"\nInput jadwal keberangkatan anda"<<endl;
cout<<"Tanggal : ";
cin>>a;
cout<<"Jam : ";
cin>>b;
cout<<"Menit : ";
cin>>c;

float d;
if (a>=1 and a<=15) d=0.5; else if(a>=16 and a<=20) d=0.75; else if (a>20 and a<=31) d=1;

cout<<"Harga tiket kereta api anda adalah : "<<d*225000<<" rupiah"<<endl;
cout<<"\nAnda akan sampai di tujuan pada"<<endl;

int p, q, r;
float e;
q=b+8;
if(b<16) {p=a;}
else if(b>16) {p=a+1;}
cout<<"Tanggal : "<<p<<endl;
if(b<16) {q=q;}
else if (b>16) {q=b-16;}
else if (c>35) {q=q+9;}
cout<<"Jam : "<<q<<endl;
if(c<35) {r=25+c;}
else if (c>35) {r=c-35;}
cout<<"Menit : "<<r<<endl;

cout<<"Terima kasih telah menggunakan program ini."<<endl;

return 0;


}
