#include <iostream>
using namespace std;

class matriks{
  public:
    void input();
    void penyortiran();
    void konversi();
  private:
    int data[20], tukar;
    int baris, kolom, data2[10][10];
int i=0;
};

void matriks::input(){
  cout << "Masukkan data: \n";
  for(int i=0; i<20; i++){
    cout << "data["<<i<<"]: ";
    cin >> data[i];
  }
  cout << "Tampilan data: ";
  for(int i=0; i<20; i++){
    cout << data[i] << " ";
  }
}


