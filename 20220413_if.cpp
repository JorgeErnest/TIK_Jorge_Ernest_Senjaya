#include <iostream>
using namespace std;

int main(){
    /*
    Jika nilai >= 90 lulus sangat memuaskan
    Jika nilai >= 80 lulus memuaskan
    Jika nilai >= 75 cukup 
    < 75 tidak lulus
    tidak boleh > 100
    tidak boleh < 0
    */
    int nilai;
    cout<<"Masukan Nilai = "; cin>>nilai;
    if (nilai > 100) {
        cout<<"nyontek ya";
    }
    else if (nilai >= 90) {
        cout<<"lulus sangat memuaskan";
    }
    else if (nilai >= 80) {
        cout<<"lulus memuaskan";
    }
    else if (nilai >= 75) {
        cout<<"cukup";
    }
    else if (nilai > 75) {
        cout<<"tidak lulus";
    }
    else { ;
        cout<<"yahaha minus";
    return 0;
    }
}//end of main function
