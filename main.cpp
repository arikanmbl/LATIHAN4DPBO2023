#include <iostream>
#include <string>

using namespace std;

//composition class
class Course {
    private:
        string nama_matakuliah;

    public:
        //constructor
        Course(){

        }

        //constructor
        Course(string nama_matakuliah) {
            this->nama_matakuliah = nama_matakuliah;
        }

        //getter setter
        string getNamaMatakuliah() {
            return nama_matakuliah;
        }

        void setNamaMatakuliah(string nama_matakuliah) {
            this->nama_matakuliah = nama_matakuliah;
        }
};

//composition class
class ProgramStudi {
    private:
        string nama_prodi;
        string kode;
        Course matakuliah;

    public:
        //constructor
        ProgramStudi(){
        }

        //constructor
        ProgramStudi(string nama_prodi, string kode, Course matakuliah){
            this->nama_prodi = nama_prodi;
            this->kode = kode;
            this->matakuliah = matakuliah;
        }

        //getter setter
        string getNamaProdi() {
            return nama_prodi;
        }

        void setNamaProdi(string nama_prodi) {
            this->nama_prodi = nama_prodi;
        }

        string getKode() {
            return kode;
        }

        void setKode(string kode) {
            this->kode = kode;
        }

        Course getMataKuliah() {
            return matakuliah;
        }

        void setMataKuliah(Course matakuliah){
            this->matakuliah = matakuliah;
        }
};

//base class: Human
class Human {
    private:
        string NIK;
        string nama;
        char jenis_kelamin;

    public:
        //constructor
        Human() {
        }

        //constructor
        Human(string NIK, string nama, char jenis_kelamin) {
            this->NIK = NIK;
            this->nama = nama;
            this->jenis_kelamin = jenis_kelamin;
        }

        //getter setter
        string getNIK() {
            return NIK;
        }

        void setNIK(string NIK) {
            this->NIK = NIK;
        }

        string getNama() {
            return nama;
        }

        void setNama(string nama) {
            this->nama = nama;
        }

        char getJenisKelamin() {
            return jenis_kelamin;
        }

        void setJenisKelamin(char jenis_kelamin) {
            this->jenis_kelamin = jenis_kelamin;
        }
};


//derived class: SivitasAkademik
class SivitasAkademik : public Human {
    private:
        string asal_universitas;
        string email_edu;

    public:
        //constructor
        SivitasAkademik() : Human() {
        }

        //constructor
        SivitasAkademik(string NIK, string nama, char jenis_kelamin, string asal_universitas, string email_edu)
        : Human(NIK, nama, jenis_kelamin) {
            this->asal_universitas = asal_universitas;
            this->email_edu = email_edu;
        }

        //getter setter
        string getAsalUniversitas() {
            return asal_universitas;
        }

        void setAsalUniversitas(string asal_universitas) {
            this->asal_universitas = asal_universitas;
        }

        string getEmailEdu() {
            return email_edu;
        }

        void setEmailEdu(string email_edu) {
            this->email_edu = email_edu;
        }
};

//derived class: Mahasiswa
class Mahasiswa : public SivitasAkademik {
    private:
        string NIM;
        string fakultas;
        ProgramStudi prodi;

    public:
        //constructor
        Mahasiswa() : SivitasAkademik() {
        }

        //constructor
        Mahasiswa(string NIK, string nama, char jenis_kelamin, string asal_universitas, string email_edu, string NIM, string fakultas, ProgramStudi prodi)
        : SivitasAkademik(NIK, nama, jenis_kelamin, asal_universitas, email_edu) {
            this->NIM = NIM;
            this->fakultas = fakultas;
            this->prodi = prodi;
        }

        //getter setter
        string getNIM() {
            return NIM;
        }

        void setNIM(string NIM) {
            this->NIM = NIM;
        }

        string getFakultas() {
            return fakultas;
        }

        void setFakultas(string fakultas) {
            this->fakultas = fakultas;
        }

        ProgramStudi getProdi() {
            return prodi;
        }

        void setProdi(ProgramStudi prodi) {
            this->prodi = prodi;
        }
};

class Dosen : public SivitasAkademik {
    private:
        string NIP;
        string fakultas;
        ProgramStudi prodi;
        string pend_terakhir;
        string keahlian;

    public:
        //constructor
        Dosen() : SivitasAkademik() {
        }

        //constructor
        Dosen(string NIK, string nama, char jenis_kelamin, string asal_universitas, string email_edu, string NIP, string fakultas, ProgramStudi prodi, string pend_terakhir, string keahlian)
        : SivitasAkademik(NIK, nama, jenis_kelamin, asal_universitas, email_edu) {
            this->NIP = NIP;
            this->fakultas = fakultas;
            this->prodi = prodi;
            this->pend_terakhir = pend_terakhir;
            this->keahlian = keahlian;
        }

        //getter setter
        string getNIP() {
            return NIP;
        }

        void setNIP(string NIP) {
            this->NIP = NIP;
        }

        string getFakultas() {
            return fakultas;
        }

        void setFakultas(string fakultas) {
            this->fakultas = fakultas;
        }

        ProgramStudi getProdi() {
            return prodi;
        }

        void setProdi(ProgramStudi prodi) {
            this->prodi = prodi;
        }

        string getPendidikanTerakhir() {
            return pend_terakhir;
        }

        void setPendidikanTerakhir(string pend_terakhir) {
            this->pend_terakhir = pend_terakhir;
        }

        string getKeahlian() {
            return keahlian;
        }

        void setKeahlian(string keahlian) {
            this->keahlian = keahlian;
        }
};

int main(){
    Course course("Desain dan Pemrograman Berorientasi Objek");
    ProgramStudi prodi("Ilmu Komputer", "D545", course);

    //set nilai mahasiswa
    Mahasiswa mhs1;
    mhs1.setNIK("3603XXXXXXXXXXXX");
    mhs1.setNama("Ayurika Sinambela");
    mhs1.setJenisKelamin('P');
    mhs1.setAsalUniversitas("UPI");
    mhs1.setEmailEdu("ayurika.s@upi.edu");
    mhs1.setNIM("2003717");
    mhs1.setFakultas("FPMIPA");
    mhs1.setProdi(prodi);

    //set nilai dosen
    Dosen dos1;
    dos1.setNIK("3400XXXXXXXXXXXX");
    dos1.setNama("Kevin Yah");
    dos1.setJenisKelamin('L');
    dos1.setAsalUniversitas("UPI");
    dos1.setEmailEdu("kevinyah@upi.edu");
    dos1.setNIP("198273748283");
    dos1.setFakultas("FPMIPA");
    dos1.setProdi(prodi);
    dos1.setPendidikanTerakhir("S3");
    dos1.setKeahlian("Berbisnis");

    //print mahasiswa
    cout << "Daftar Mahasiswa" << '\n';
    cout << "================" << '\n';
    cout << "Nama \t\t\t: " << mhs1.getNama() << '\n';
    cout << "NIK \t\t\t: " << mhs1.getNIK() << '\n';
    cout << "Jenis Kelamin \t\t: " << mhs1.getJenisKelamin() << '\n';
    cout << "Asal Universitas \t: " << mhs1.getAsalUniversitas() << '\n';
    cout << "Email Edu \t\t: " << mhs1.getEmailEdu() << '\n';
    cout << "NIM \t\t\t: " << mhs1.getNIM() << '\n';
    cout << "Fakultas \t\t: " << mhs1.getFakultas() << '\n';
    cout << "Prodi \t\t\t: " << mhs1.getProdi().getNamaProdi() << '\n';
    cout << "Kode Prodi \t\t: " << mhs1.getProdi().getKode() << '\n';
    cout << "Mata Kuliah yang diambil: " << mhs1.getProdi().getMataKuliah().getNamaMatakuliah() << "\n\n";

    //print dosen
    cout << "Daftar Dosen" << '\n';
    cout << "============" << '\n';
    cout << "Nama \t\t\t: " << dos1.getNama() << '\n';
    cout << "NIK \t\t\t: " << dos1.getNIK() << '\n';
    cout << "Jenis Kelamin \t\t: " << dos1.getJenisKelamin() << '\n';
    cout << "Asal Universitas \t: " << dos1.getAsalUniversitas() << '\n';
    cout << "Email Edu \t\t: " << dos1.getEmailEdu() << '\n';
    cout << "NIP \t\t\t: " << dos1.getNIP() << '\n';
    cout << "Fakultas \t\t: " << dos1.getFakultas() << '\n';
    cout << "Prodi \t\t\t: " << dos1.getProdi().getNamaProdi() << '\n';
    cout << "Kode Prodi \t\t: " << dos1.getProdi().getKode() << '\n';
    cout << "Mata Kuliah yang diajar : " << dos1.getProdi().getMataKuliah().getNamaMatakuliah() << '\n';
    cout << "Pendidikan Terakhir \t: " << dos1.getPendidikanTerakhir() << '\n';
    cout << "Keahlian \t\t: " << dos1.getKeahlian() << "\n\n";

    return 0;
}