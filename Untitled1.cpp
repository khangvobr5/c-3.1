#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;

    // Yêu c?u nguoi dùng nhap tên
    cout << "Nhap tên cua ban: ";
    getline(cin, name); // Dùng getline du nhap tên có khong trong

    // In ra loi chào vai tên nguoi dùng
    cout << "Xin chào, " << name << "!" << endl;

    return 0;
}
