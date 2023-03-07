#composition class
class Course:
    #constructor
    def __init__(self, nama_matakuliah=""):
        self.nama_matakuliah = nama_matakuliah

    #getter setter
    def getNamaMatakuliah(self):
        return self.nama_matakuliah

    def setNamaMatakuliah(self, nama_matakuliah):
        self.nama_matakuliah = nama_matakuliah

#composition class
class ProgramStudi:
    #constructor
    def __init__(self, nama_prodi="", kode="", matakuliah=Course()):
        self.nama_prodi = nama_prodi
        self.kode = kode
        self.matakuliah = matakuliah

    #getter setter
    def getNamaProdi(self):
        return self.nama_prodi

    def setNamaProdi(self, nama_prodi):
        self.nama_prodi = nama_prodi

    def getKode(self):
        return self.kode

    def setKode(self, kode):
        self.kode = kode

    def getMataKuliah(self):
        return self.matakuliah

    def setMataKuliah(self, matakuliah):
        self.matakuliah = matakuliah

#base class: Human
class Human:
    #constructor
    def __init__(self, NIK="", nama="", jenis_kelamin=""):
        self.NIK = NIK
        self.nama = nama
        self.jenis_kelamin = jenis_kelamin

    #getter setter
    def getNIK(self):
        return self.NIK

    def setNIK(self, NIK):
        self.NIK = NIK

    def getNama(self):
        return self.nama

    def setNama(self, nama):
        self.nama = nama

    def getJenisKelamin(self):
        return self.jenis_kelamin

    def setJenisKelamin(self, jenis_kelamin):
        self.jenis_kelamin = jenis_kelamin

#derived class: SivitasAkademik
class SivitasAkademik(Human):
    #constructor
    def __init__(self, NIK="", nama="", jenis_kelamin="", asal_universitas="", email_edu=""):
        super().__init__(NIK, nama, jenis_kelamin)
        self.asal_universitas = asal_universitas
        self.email_edu = email_edu

    #getter setter
    def getAsalUniversitas(self):
        return self.asal_universitas

    def setAsalUniversitas(self, asal_universitas):
        self.asal_universitas = asal_universitas

    def getEmailEdu(self):
        return self.email_edu

    def setEmailEdu(self, email_edu):
        self.email_edu = email_edu

#derived class: Mahasiswa
class Mahasiswa(SivitasAkademik):
    #constructor
    def __init__(self, NIK="", nama="", jenis_kelamin="", asal_universitas="", email_edu="", NIM="", fakultas="", prodi=ProgramStudi()):
        super().__init__(NIK, nama, jenis_kelamin, asal_universitas, email_edu)
        self.NIM = NIM
        self.fakultas = fakultas
        self.prodi = prodi

    #getter setter
    def getNIM(self):
        return self.NIM

    def setNIM(self, NIM):
        self.NIM = NIM

    def getFakultas(self):
        return self.fakultas

    def setFakultas(self, fakultas):
        self.fakultas = fakultas

    def getProdi(self):
        return self.prodi

    def setProdi(self, prodi):
        self.prodi = prodi

#derived class: Dosen
class Dosen(SivitasAkademik):
    def __init__(self, NIK="", nama="", jenis_kelamin="", asal_universitas="", email_edu="", NIP="", fakultas="", prodi=None, pend_terakhir="", keahlian=""):
        super().__init__(NIK, nama, jenis_kelamin, asal_universitas, email_edu)
        self.NIP = NIP
        self.fakultas = fakultas
        self.prodi = prodi
        self.pend_terakhir = pend_terakhir
        self.keahlian = keahlian

    def getNIP(self):
        return self.NIP

    def setNIP(self, NIP):
        self.NIP = NIP

    def getFakultas(self):
        return self.fakultas

    def setFakultas(self, fakultas):
        self.fakultas = fakultas

    def getProdi(self):
        return self.prodi

    def setProdi(self, prodi):
        self.prodi = prodi

    def getPendidikanTerakhir(self):
        return self.pend_terakhir

    def setPendidikanTerakhir(self, pend_terakhir):
        self.pend_terakhir = pend_terakhir

    def getKeahlian(self):
        return self.keahlian

    def setKeahlian(self, keahlian):
        self.keahlian = keahlian

#main code
course = Course("Desain dan Pemrograman Berorientasi Objek")
prodi = ProgramStudi("Ilmu Komputer", "D545", course)

#set nilai mahasiswa
mhs1 = Mahasiswa()
mhs1.setNIK("3603XXXXXXXXXXXX")
mhs1.setNama("Ayurika Sinambela")
mhs1.setJenisKelamin('P')
mhs1.setAsalUniversitas("UPI")
mhs1.setEmailEdu("ayurika.s@upi.edu")
mhs1.setNIM("2003717")
mhs1.setFakultas("FPMIPA")
mhs1.setProdi(prodi)

#set nilai dosen
dos1 = Dosen()
dos1.setNIK("3400XXXXXXXXXXXX")
dos1.setNama("Kevin Yah")
dos1.setJenisKelamin('L')
dos1.setAsalUniversitas("UPI")
dos1.setEmailEdu("kevinyah@upi.edu")
dos1.setNIP("198273748283")
dos1.setFakultas("FPMIPA")
dos1.setProdi(prodi)
dos1.setPendidikanTerakhir("S3")
dos1.setKeahlian("Berbisnis")

#print mahasiswa
print("Daftar Mahasiswa")
print("================")
print("Nama \t\t\t: ", mhs1.getNama())
print("NIK \t\t\t: ", mhs1.getNIK())
print("Jenis Kelamin \t\t: ", mhs1.getJenisKelamin())
print("Asal Universitas \t: ", mhs1.getAsalUniversitas())
print("Email Edu \t\t: ", mhs1.getEmailEdu())
print("NIM \t\t\t: ", mhs1.getNIM())
print("Fakultas \t\t: ", mhs1.getFakultas())
print("Prodi \t\t\t: ", mhs1.getProdi().getNamaProdi())
print("Kode Prodi \t\t: ", mhs1.getProdi().getKode())
print("Mata Kuliah yang diambil: ", mhs1.getProdi().getMataKuliah().getNamaMatakuliah(), "\n")

#print dosen
print("Daftar Dosen")
print("============")
print("Nama \t\t\t: ", dos1.getNama())
print("NIK \t\t\t: ", dos1.getNIK())
print("Jenis Kelamin \t\t: ", dos1.getJenisKelamin())
print("Asal Universitas \t: ", dos1.getAsalUniversitas())
print("Email Edu \t\t: ", dos1.getEmailEdu())
print("NIP \t\t\t: ", dos1.getNIP())
print("Fakultas \t\t: ", dos1.getFakultas())
print("Prodi \t\t\t: ", dos1.getProdi().getNamaProdi())
print("Kode Prodi \t\t: ", dos1.getProdi().getKode())
print("Mata Kuliah yang diajar : ", dos1.getProdi().getMataKuliah().getNamaMatakuliah())
print("Pendidikan Terakhir \t: ", dos1.getPendidikanTerakhir())
print("Keahlian \t\t: ", dos1.getKeahlian(), "\n")