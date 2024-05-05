// 1. contoh deklarasi variabel, 
// berikan minimal 3 variabel dengan tipe data yang berbeda!
//jawab: 
// #include <iostream>
// using namespace std;
// 
// int main() {
// string nama = Sarah;
// cout << nama;
// float beratBadan = 56,3;
// cout << beratBadan;
//int umur = 25;
//cout << umur;
//}


//2. contoh implementasi conditional statement
// jawab:
//a.  if (nRapor > 80) {
// cout << "anda pintar";
//} else {
// cout << "ayo tingkatkan lagi!";
//}

//b. if (bil1, bil2) {
//      cout << "kedua bilangan sama besar";
// }
//   else if (bil1 > bil2) {
//      cout << "bilangan satu kebih besar daripada bilangan dua";
// } else {
//  cout << "bilangan dua lebih besar daripada bilangan satu":
//}

// 3. contoh implementasi dari struct: 
// struct Pelanggan {
//      string nama;
//      string noHp;
//      string alamat;
//      string dataPesanan;
//}

// 4. implementasi prosedur dan fungsi
// prosedur:
// void input() {
//  cout << "masukkan nama: ";
//  cin >> nama;
//  cout << "masukkan nomor hp: ";
//  cin >> noHp;
//  cout << "masukkan alamat: ";
//  cin >> alamat;
//  }
// 
//fungsi: 
//int totalHarga() {
//  return (bJeruk * hJeruk) + (bApel * hApel) + (bAnggur * hAnggur);
//}

//5. implementasi dari looping
// 
// do {
//  cout << "hari ini cerah" << endl;
//  } while (a > 1);




#include <iostream>
using namespace std;

int main()
{
    const int kandidat = 3;
    string nama[kandidat];
    int nMatematika[kandidat];
    int nEnglish[kandidat];
    string status[kandidat];

    cout << "DATA KANDIDAT" << endl;
    cout << "==============" << endl;
    for (int i = 1; i < kandidat; ++i) {
        cout << "Nama kandidat ke-" << i << ": ";
        cin >> nama[i];
        cout << "Nilai Matematika: ";
        cin >> nMatematika[i];
        cout << "Nilai Bahasa Inggris: ";
        cin >> nEnglish[i];

        if ((nMatematika[i] + nEnglish[i]) / 2 >= 70 || nMatematika[i] > 80) {
            status[i] = "Diterima";
        }
        else {
            status[i] = "Ditolak";
        }

    }

    cout << "Nama\tStatus" << endl;
    for (int i = 1; i < kandidat; ++i) {
        cout << nama[i] << "\t" << status[i] << endl; 
    }

    return 0;

}

