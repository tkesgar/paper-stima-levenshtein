#include <iostream>
using namespace std;
int main ()
{
    typedef struct {
    int tt, jam, mm, tt1, jam1, mm1;
    } JADWAL;

    JADWAL J;

cout<<"Input jadwal keberangkatan Anda. tt: "; cin>>J.tt;
cout<<"Jam:"; cin>>J.jam;
cout<<"mm: "; cin>>J.mm;


    if (J.tt<=15) {
        cout<<"Harga tiket kereta Anda: Rp"<<225000*0.5;
    } else {
    if ((J.tt>=16)&&(J.tt<=20)) {
    cout << "Harga tiket kereta Anda: Rp"<<225000*0.75;
    } else {
    cout << "Harga tiket kereta Anda: Rp"<<225000;
    } }

J.tt1 = J.tt
J.jam1 = J.jam+8
J.mm1 =J.mm+25
J.tt2 = J.tt1-31

   if (J.tt1>=31) {
cout<<"Anda akan sampai di tujuan pada tt: "<<J.tt1;
} else {
cout<<"Anda akan sampai di tujuan pada tt: "<<J.tt2;
}

if (jam>=24) {
cout<<"Jam: "<<J.jam2;
} else {
cout<<"Jam: "<<J.jam1;
}

if (mm>=60) {
cout<<"mm: "<<mm2;
} else {
cout<<"mm: "<<mm1;
}

<< ", jam: "<<J.jam1<< ", mm: "<<J.mm1;

 return 0;
    }
