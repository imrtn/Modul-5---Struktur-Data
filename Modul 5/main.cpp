#include <iostream>
#include "Singlylist.h"

using namespace std;

int main() {
    List L;
    address P;
    address hasil;

    createList(L);

    P = alokasi(2);
    insertFirst(L, P);

    P = alokasi(0);
    insertFirst(L, P);

    P = alokasi(8);
    insertFirst(L, P);

    P = alokasi(12);
    insertFirst(L, P);

    P = alokasi(9);
    insertFirst(L, P);

    cout << "Isi Singly Linked List: ";
    printInfo(L);

    hasil = findElm(L, 8);

    if (hasil != Nil) {
        cout << "Elemen 8 ditemukan." << endl;
    } else {
        cout << "Elemen 8 tidak ditemukan." << endl;
    }

    return 0;
}