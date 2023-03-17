#include <iostream>
using namespace std;

int main(){
    int no; //variabel kosong
    int nim = 001;  //variabel berisi
    string nama = "Imelda";

    string aktivitas;
    string tempat;

    cout<<"Apa aktivitas anda \t: ";
    getline(cin, aktivitas);

    cout<<"Dimana Anda "<<aktivitas <<" \t: ";
    getline(cin, tempat);

    cout<<"saya sedang "<<aktivitas <<" di "<<tempat<<endl;

    cout<<nim<<endl;
    cout<<nama<<endl;

    cout<< nama <<" adalah mahasiswa dengan nim "<< nim <<endl; //satu statement = satu cout yang menghimpun beberapa variabel
}

/*\t untuk memberikan spasi yang sama
- cin hanya mendeteksi satu kata yang paling depan untuk belakangnya tidak terdeteksi
- getline(cin, aktivitas); => agar inputan bisa mendeteksi kata lebih dari satu*/