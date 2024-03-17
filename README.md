# Cara menjalankan kode program

  Pada tugas ini saya sudah menyiapkan kode program dalam bahasa pemrograman C untuk melakukan pengurutan bilangan secara acak menggunakan tiga algoritma yang berbeda, yaitu bubble sort, selection sort, dan insertion sort. Kode program ini akan menghasilkan waktu yang diperlukan untuk setiap algoritma pengurutan saat jumlah bilangan yang diurutkan ditingkatkan sebanyak 100 ribu pada setiap iterasi. Kode program tersebut disimpan di dalam sebuah file dengan ekstensi .c, dan mengompilasinya menggunakan compiler C seperti GCC. Setelah berhasil dikompilasi, kode program tersebut di jalankan di terminal dengan perintah `./sorting`.

Hasil eksekusi program ini akan menampilkan waktu yang dibutuhkan untuk masing-masing algoritma pengurutan dalam milidetik (ms). Selain itu, program akan membuat file sorted_numbers.txt yang berisi bilangan yang telah terurut sesuai dengan algoritma pengurutan yang digunakan.

## Fungsi dalam program
Dalam kode program di atas, terdapat beberapa fungsi yang digunakan, di antaranya:

1. `void generateRandomNumbers(int *array, int n)`: Fungsi ini digunakan untuk mengisi array dengan bilangan acak. Fungsi ini menerima dua parameter: `array` yang merupakan pointer ke array yang akan diisi dengan bilangan acak, dan `n` yang merupakan jumlah bilangan dalam array.
2. `void bubbleSort(int *array, int n)`: Fungsi ini mengimplementasikan algoritma pengurutan Bubble Sort. Fungsi ini menerima dua parameter: `array` yang merupakan pointer ke array yang akan diurutkan, dan `n` yang merupakan jumlah elemen dalam array.
3. `void selectionSort(int *array, int n)`: Fungsi ini mengimplementasikan algoritma pengurutan Selection Sort. Fungsi ini menerima dua parameter: `array` yang merupakan pointer ke array yang akan diurutkan, dan `n` yang merupakan jumlah elemen dalam array.
4. `void insertionSort(int *array, int n)`: Fungsi ini mengimplementasikan algoritma pengurutan Insertion Sort. Fungsi ini menerima dua parameter: `array` yang merupakan pointer ke array yang akan diurutkan, dan `n` yang merupakan jumlah elemen dalam array.
5. `void saveArrayToFile(int *array, int n, const char *filename)`: Fungsi ini tidak ditampilkan dalam kode yang diberikan, tetapi deklarasinya ada di bagian `Function prototypes`.


Dalam fungsi main(), program melakukan pengukuran waktu eksekusi untuk masing-masing algoritma pengurutan (Bubble Sort, Selection Sort, dan Insertion Sort) dengan jumlah bilangan yang berbeda-beda, mulai dari 100.000 hingga 1.000.000 dengan increment 100.000. Kemudian, waktu eksekusi dari masing-masing algoritma untuk setiap jumlah bilangan ditampilkan dalam format tabel.
