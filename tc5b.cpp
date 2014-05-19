#include<iostream>
using namespace std;

int main () {
	int a, b, c, p, q, r;
	float d, e;

	cout <<"Selamat datang pada program tiket PT KAI." <<endl;
	cout << endl;

	cout << "Input jadwal keberangkatan anda:" << endl;
	cout << "Tanggal : "; cin >> a;
	cout << "Jam     : "; cin >> b;
	cout << "Menit   : "; cin >> c;

	if (a >= 1 && a <= 15) {
		d=0.5f;
	} else if (a >= 16 && a <= 20) {
		d=0.75f;
	} else {
		d=1.0f;
	}

	cout << "Harga tiket kereta api anda adalah Rp " << d * 225000 << endl;
	cout << "Anda akan sampai di tujuan pada:" << endl;

	q = b + 8;
	if (b < 16) { p = a;      } else if ( b > 16 ) { p = a + 1 ; }
	if (b < 16) { q = q;      } else if ( b > 16 ) { q = b - 16; } else if ( c > 35 ) { q = q + 9; }
	if (c < 35) { r = 25 + c; } else if ( c > 35 ) { r = c - 35; }
	cout<<"Tanggal : " << p << endl;
	cout<<"Jam     : " << q << endl;
	cout<<"Menit   : " << r << endl;

	cout << "Terima kasih telah menggunakan program ini." <<endl;
	return 0;
}
