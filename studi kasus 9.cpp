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
void matriks::penyortiran(){
  for (int i=0; i<19; i++){ // penyortiran data
    for(int j= i+1; j<19; j++ ){
      if (data[i]>data[j]){
        tukar=data[i];
        data[i]=data[j];
        data[j]=tukar;   
      }
    }
  }
  for(int i=0; i<20; i++){
    cout << data[i] << " ";
  }
}
void matriks::konversi(){
  int i=0;
  cout << "Masukkan banyak kolom: ";
  cin >> kolom;
  cout << "Masukkan banyak baris: ";
  cin >> baris;
  for(int k=0; k<baris; k++){
  	for(int l=0; l<kolom; l++){
  		data2[k][l] = data[i];
  		i++;
	  }
  }
  cout << endl;
  for(int k=0; k<baris; k++){
  	for(int l=0; l<kolom; l++){
  		cout << data2[k][l] << " ";
	  }
	  cout << endl;
	}
}
int main(){
  matriks Sarah;
  Sarah.input();
  cout << endl << endl;
  cout << "Hasil sorting: ";
  Sarah.penyortiran();
  cout << endl << endl;
  Sarah.konversi();
  return 0;
}


