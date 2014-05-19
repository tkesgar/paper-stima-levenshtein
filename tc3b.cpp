#include<iostream>
using namespace std;


int main ()


{

cout<<"Selamat datang pada program tiket PT KAI"<<endl;

    int k;
    int l;
    int m;

cout<<"\nInput jadwal keberangkatan anda"<<endl;
cout<<"Tanggal : ";
cin>>k;
cout<<"Jam : ";
cin>>l;
cout<<"Menit : ";
cin>>m;

float d;
if (k>=1 and k<=15) {d=0.5;} else if(k>=16 and k<=20) {d=0.75;} else if (k>20 and k<=31) {d=1;}

cout<<"Harga tiket kereta api anda adalah : "<<d*225000<<" rupiah"<<endl;
cout<<"\nAnda akan sampai di tujuan pada"<<endl;

int d;
int e;
int f;
float e;
e=l+8;
if(l<16) {d=k;} else if(l>16) {d=k+1;}
cout<<"Tanggal : "<<d<<endl;
if(l<16) {e=e;} else if (l>16) {e=l-16;} else if (m>35) {e=e+9;}
cout<<"Jam : "<<e<<endl;
if(m<35) {f=25+m;} else if (m>35) {f=m-35;}
cout<<"Menit : "<<f<<endl;

cout<<"Terima kasih telah menggunakan program ini."<<endl;

return 0;


}
