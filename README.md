# Cara menjalankan kode program

  Pada tugas ini saya sudah menyiapkan kode program dalam bahasa pemrograman C untuk melakukan pengurutan bilangan secara acak menggunakan tiga algoritma yang berbeda, yaitu bubble sort, selection sort, dan insertion sort. Kode program ini akan menghasilkan waktu yang diperlukan untuk setiap algoritma pengurutan saat jumlah bilangan yang diurutkan ditingkatkan sebanyak 100 ribu pada setiap iterasi. Kode program tersebut disimpan di dalam sebuah file dengan ekstensi .c, dan mengompilasinya menggunakan compiler C seperti GCC. Setelah berhasil dikompilasi, kode program tersebut di jalankan di terminal dengan perintah `./sorting`.

Hasil eksekusi program ini akan menampilkan waktu yang dibutuhkan untuk masing-masing algoritma pengurutan dalam milidetik (ms). Selain itu, program akan membuat file sorted_numbers.txt yang berisi bilangan yang telah terurut sesuai dengan algoritma pengurutan yang digunakan.

## Fungsi dalam program
### 1.	generateRandomNumbers(int *array, int n):

•	Fungsi ini bertanggung jawab untuk mengisi array dengan bilangan bulat secara acak.

•	Parameter `array` adalah array yang akan diisi dengan bilangan acak.

•	Parameter `n` adalah jumlah elemen dalam array.

### 2.	bubbleSort(int *array, int n):

•	Fungsi ini menerapkan algoritma bubble sort untuk mengurutkan array.

•	Parameter `array` adalah array yang akan diurutkan.

•	Parameter `n` adalah jumlah elemen dalam array.

### 3.	selectionSort(int *array, int n):

•	Fungsi ini menerapkan algoritma selection sort untuk mengurutkan array.

•	Parameter `array` adalah array yang akan diurutkan.

•	Parameter `n` adalah jumlah elemen dalam array.

### 4.	insertionSort(int *array, int n):

•	Fungsi ini menerapkan algoritma insertion sort untuk mengurutkan array.

•	Parameter `array` adalah array yang akan diurutkan.

•	Parameter `n` adalah jumlah elemen dalam array.

### 5.	SaveArrayToFile(int *array, int n, const char *filename):

•	Fungsi ini digunakan untuk menyimpan isi array ke dalam file teks.

•	Parameter `array` adalah array yang akan disimpan.

•	Parameter `n` adalah jumlah elemen dalam array.

•	Parameter `filename` adalah nama file di mana array akan disimpan.

Selain fungsi-fungsi tersebut, terdapat juga fungsi `main` yang merupakan titik masuk utama program. Di dalam `main`, dilakukan iterasi untuk melakukan pengurutan bilangan dengan berbagai algoritma dan jumlah bilangan yang berbeda, serta mencatat waktu eksekusi masing-masing algoritma. Setelah itu, program menyimpan bilangan yang sudah terurut ke dalam file dan mencetak waktu yang diperlukan untuk setiap algoritma ke terminal.
