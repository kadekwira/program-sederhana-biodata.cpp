#include <iostream>

using namespace std;

int main()
{
    string nama;
    int nim;
    int umur;
    float tinggi_badan;
    char jenis_kelamin;

    cout<<"Membuat program biodata"<<endl;
    cout<<"-----------------------"<<endl;

    //NAMA
    cout<< "nama: ";
    getline(cin,nama);

    //NIM
    cout<<"nim: ";
    cin>>nim;

    //UMUR
    cout<<"umur: ";
    cin>>umur;

    //TINGGI BADAN
    cout<<"tinggi badan: ";
    cin>>tinggi_badan;

    //Jenis kelamin
    cout<<"jenis kelamin[P/L]: ";
    cin>>jenis_kelamin;


    cout<<endl;
    cout<<"BIODATA SAYA"<<endl;

    cout<<"......................."<<endl;
    cout<<"NAMA: "<<nama<<endl;
    cout<<"NIM: "<<nim<<endl;
    cout<<"UMUR: "<<umur<<endl;
    cout<<"TINGGI BADAN: "<<tinggi_badan<<endl;
    cout<<"JENIS KELAMIN: "<<jenis_kelamin<<endl;

    return 0;
}
