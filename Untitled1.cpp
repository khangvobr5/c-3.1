#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;

    // Y�u c?u nguoi d�ng nhap t�n
    cout << "Nhap t�n cua ban: ";
    getline(cin, name); // D�ng getline du nhap t�n c� khong trong

    // In ra loi ch�o vai t�n nguoi d�ng
    cout << "Xin ch�o, " << name << "!" << endl;

    return 0;
}
