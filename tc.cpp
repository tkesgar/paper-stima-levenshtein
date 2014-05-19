//Nama/NIM : Zulfikar Afdhola
//Tanggal : 20 Februari 2014
//Nama File : B01-16713090-140220-1.cpp
//Deskripsi : Program tarif kereta

#include <iostream>
using namespace std;
int main()
{
    typedef struct{
    int tanggal,jam,menit;
}jadwal;
jadwal j;


cout<<"Selamat datang pada program tiket PT KAI"<<endl;
cout<<"============================================="<<endl;
cout<<"Input jadwal keberangkatan anda"<<endl;
cout<<"============================================="<<endl;
//Pengisian waktunya
cout<<"Tanggal : ";cin>>j.tanggal;
cout<<"Jam : ";cin>>j.jam;
cout<<"Menit : ";cin>>j.menit;
cout<<"Harga tiket kereta api anda : Rp ";
if(j.tanggal<=15&&j.tanggal>=1)
{
    cout<<((0.5)*225000);

}
else if(j.tanggal>=16&&j.tanggal<=20)
{
    cout<<((0.25)*225000);
}
else{cout<<(225000);}
cout<<",00"<<endl;
//Asumsi lama perjalanan 8 jam 25 menit
cout<<"Anda akan sampai di tujuan pada"<<endl;
cout<<"============================================="<<endl;
cout<<"Tanggal : ";cin>>j.tanggal;
cout<<"Jam : ";cin>>j.jam;
cout<<"Menit : ";cin>>j.menit;

cout<<"Terimakasih telah menggunakan program ini.";






return 0;


}



