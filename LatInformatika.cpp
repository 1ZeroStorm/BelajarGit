#include <iostream>
using namespace std;

void catatan(){
// char -> character tunggal
// string menulis kata / kalimat
// double -> desimal, bedanya dengan float berdasarkan pada penggunaan memory 
// const -> constanta suatu variabel yang tidak dapat dirubah nilainya
// \n -> newline

// concatenate using << example:cout << "Saya berusia "<< usiaSaya << " tahun.";
}

void pertanyaan(){
// mengapa int main bisa main sendiri tapi function buatan harus dinyalain manual?
// bedanya float dan double?
// apakah void termasuk tipe data (function)
}

//YOUR CODE HERE/////////////////////////////////////////// 
int MyNumber = 0;

int numFunction(int numberparam){
    MyNumber += numberparam;
    cout << "My number is ", MyNumber;
}

////////////////////////////////////////////////////
int usiaSaya = 35;

void Usia(){
    cout << "Saya berusia "<< usiaSaya << " tahun.";
}
////////////////////////////////////////////////////

void LatOperat(){
    int x = 5;
    int y = 6;
    int sum = x + y;
    cout << sum;
}

////////////////////////////////////////////////////

void mendeklarasikanSekalian(){
    int x = 5, y = 6, z = 50;

    cout << x + y + z;
}

////////////////////////////////////////////////////

void constanta(){
    const int MyNumber = 3;

    //MyNumber = 2;

}

////////////////////////////////////////////////////

void inputC(){
    int x;

    cout << "masukkan angka anda: ";
    cin >> x;
    cout << "Angka anda adalah: ", x;
}

// main main main main main main main
int main(){
    cout << "starting\n";
    //Usia();
    inputC();
    return 0;
}

