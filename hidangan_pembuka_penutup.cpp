// Nama: Reyhan Dany_F55123095
#include <iostream>
using namespace std;

int main() {
    const double HARGA_UTAMA = 75000;
    const double HARGA_PENUTUP = 30000;
    const double DISKON_UTAMA = 0.05;
    const double DISKON_PENUTUP = 0.10;
    const double BIAYA_ADMIN_KARTU = 5000;

    char lanjutPesan;

    do {
        string jenisMakanan;
        int jumlah;
        string metodePembayaran;

        cout << "Pilih jenis makanan (utama/penutup): ";
        cin >> jenisMakanan;

        cout << "Masukkan jumlah menu yang dipesan: ";
        cin >> jumlah;

        cout << "Pilih metode pembayaran (tunai/kartu): ";
        cin >> metodePembayaran;

        double totalHarga = 0;
        double diskon = 0;

        if (jenisMakanan == "utama") {
            totalHarga = HARGA_UTAMA * jumlah;
            if (jumlah >= 2) {
                diskon = totalHarga * DISKON_UTAMA;
            }
        } else if (jenisMakanan == "penutup") {
            totalHarga = HARGA_PENUTUP * jumlah;
            if (jumlah >= 3) {
                diskon = totalHarga * DISKON_PENUTUP;
            }
        } else {
            cout << "Jenis makanan tidak valid.\n";
            continue;
        }

        if (metodePembayaran == "kartu") {
            totalHarga += BIAYA_ADMIN_KARTU;
        }

        double totalSetelahDiskon = totalHarga - diskon;

        // Menampilkan ringkasan transaksi
        cout << "\nRingkasan Transaksi:\n";
        cout << "Jenis Makanan: " << jenisMakanan << endl;
        cout << "Jumlah Menu: " << jumlah << endl;
        cout << "Total Biaya: Rp " << totalHarga << endl;
        cout << "Diskon: Rp " << diskon << endl;
        cout << "Total Biaya Setelah Diskon: Rp " << totalSetelahDiskon << endl;
        cout << "Metode Pembayaran: " << metodePembayaran << endl;

        // Meminta input untuk melanjutkan atau mengakhiri transaksi
        cout << "\nApakah Anda ingin melanjutkan pemesanan? (Y/N): ";
        cin >> lanjutPesan;

    } while (lanjutPesan == 'Y' || lanjutPesan == 'y');

    cout << "Terima kasih telah melakukan pemesanan. Selamat menikmati makanan\n";

    return 0;
}

