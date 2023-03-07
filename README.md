# LATIHAN4DPBO2023

Saya Ayurika Sinambela 2003717 mengerjakan Latihan 4 dalam mata kuliah DPBO untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Amin.

# Desain
Program ini dibuat dengan Object-Oriented Programming (OOP) menggunakan konsep Multi-Level Inheritance, Composite, dan Array of Object. Terdapat 6 kelas dalam program ini:
- Composite Class: class Course dan Class ProgramStudi
  - Class Course merupakan komposisi dari class ProgramStudi, dimana di dalam class ini menyimpan objek yang dapat diakses oleh class ProgramStudi, yaitu objek mata kuliah.
   - Class ProgramStudi merupakan komposisi dari class Mahasiswa dan Dosen, dimana di dalam class ini menyimpan objek yang dapat diakses oleh class Mahasiswa dan Dosen, yaitu objek program studi.
- Class Human: merupakan base class atau parent dari class SivitasAkademik
- Class SivitasAkademik: merupakan derived class dari class Human dan base class atau parent dari class Mahasiswa dan Dosen
- Class Mahasiswa: berisi data-data Mahasiswa dan merupakan derived class dari SivitasAkademik. Terdapat atribut prodi yang berelasi komposisi dengan class ProgramStudi.
- Class Dosen: berisi data-data Dosen dan merupakan derived class dari SivitasAkademik. Terdapat atribut prodi yang berelasi komposisi dengan class ProgramStudi.

# Alur Program
- Nilai pada Mahasiswa dan Dosen di set dengan hardcode
- Daftar Mahasiswa dan Dosen akan ditampilkan dalam bentuk list menggunakan getter sesuai dengan nilai yang telah di set

# Dokumentasi
![image](https://user-images.githubusercontent.com/71563980/223491254-ca48c569-3b27-4344-8210-f65e8e442c5f.png)
