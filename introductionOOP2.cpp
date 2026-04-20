#include <iostream>
#include <string>
using namespace std;

class Produk {
private:
    string namaProduk;
    int stok;
    string jenis;
    string tglRilis;

public:


    Produk(string n, int s, string j, string t) 
        : namaProduk(n), stok(s), jenis(j), tglRilis(t) {}

    void infoProduk() {
        cout << "Item Name    : " << namaProduk << endl;
        cout << "Stock        : " << stok << " unit" << endl;
        cout << "Category     : " << jenis << endl;
        cout << "Release Date : " << tglRilis << endl;
        cout << "===================================" << endl;

    }

};

int main() {
    Produk p1("Smartphone", 15, "Gadget", "20-02-2024");
    Produk p2("Meja Kerja", 5, "Furniture", "05-12-2023");

    cout << ">>> INFORMASI PRODUK A <<<" << endl;
    p1.infoProduk();

    cout << ">>> INFORMASI PRODUK B <<<" << endl;
    p2.infoProduk();

    return 0;

}