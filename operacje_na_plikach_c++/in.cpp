#include <iostream>
#include <fstream>

using namespace std;

string imie;

int main(){
    cout << "POdaj imie: ";
    cin >> imie;
    fstream plik;
    plik.open("imie.txt",ios::in);
    if(plik.good()==false)
    {
        cout<<"Plik nie istnieje";
        exit(0);
    }
    cout<<imie<<endl;
    plik.close();
    return 0;
}