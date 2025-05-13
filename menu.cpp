#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;
int data[100000], t[100000];
int n; // jumlah data

// Pilihan Menu
void dMenu()
{
  system("cls");
  cout << "Aplikasi Tampilan Menu" << "\n";
  cout << "1. Masukkan data" << "\n";
  cout << "2. Tampilkan isi data" << "\n";
  cout << "3. Sortir data" << "\n";
  cout << "4. Informasi" << "\n";
  cout << "5. Exit" << "\n";
  cout << "Masukan angka :";
}

void ascendingSort( int data[], int n)
{
  int temp;
  for (int i = 1; i < n; i++) {
    temp = data[i];
    int j = i - 1;
    while (j >= 0 && data[j] > temp) {
      data[j + 1] = data[j];
      j--;
    }
    data[j + 1] = temp;
  }
}

void descendingSort( int data[], int n)
{
  int temp;
  for (int i = 1; i < n; i++) {
    temp = data[i];
    int j = i - 1;
    while (j >= 0 && data[j] < temp) {
      data[j + 1] = data[j];
      j--;
    }
    data[j + 1] = temp;
  }
}

void sort(int data[], int n) {
  char choice;
  cout << "Pilih urutan (a untuk ascending, d untuk descending): ";
  cin >> choice;
  if (choice == 'a') {
    ascendingSort(data, n);
  } else if (choice == 'd') {
    descendingSort(data, n);
  } else {
    cout << "Pilihan tidak valid." << endl;
  }
}

void copy() {
  for (int i = 0; i < n; i++) {
      t[i] = data[i];
  }
}

// Fungsi setiap menu
void ms()
{
  system("cls");
  cout << "Masukkan jumlah data: ";
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cout << "Masukkan Data ke-" << i + 1 << ": ";
      cin >> data[i];
  }
  copy();
  cout << "Tekan sembarang tombol untuk kembali ke menu utama." << endl;
  getch();
}

void md()
{
  system("cls");
  cout << "Data yang dimasukkan adalah: ";
  for (int i = 0; i < n; i++) {
    cout << t[i] << " ";
}
  cout << endl;
  cout << "Tekan sembarang tombol untuk kembali ke menu utama." << endl;
  getch();
}

void mt()
{
  system("cls");
  sort(data, n);
  cout << "Data yang telah diurutkan adalah: ";
  for (int i = 0; i < n; i++) {
    cout << data[i] << " ";
  }

  cout << endl;
  cout << "Tekan sembarang tombol untuk kembali ke menu utama." << endl;
  getch();
}

void me()
{
  system("cls");
  cout << "informasi" << endl;
  getch();
}

// Fungsi utama
int main()
{
  char p;
  do
  {
    dMenu();
    p = getch();
    switch (p)
    {
    case '1':
      ms();
      break;
    case '2':
      md();
      break;
    case '3':
      mt();
      break;
    case '4':
      me();
      break;
    case '5':
      break;

    default:
      system("cls");
      cout << "Pilihan Tidak Tersedia";
      getch();
      break;
    }

  } while (p != '5');
 return 0;
}