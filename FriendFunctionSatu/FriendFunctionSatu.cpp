#include <iostream>
#include <string>
using namespace std;

class mahasiswa 
{
private:
	string nama;

public:
	friend void setName(mahasiswa& a, string);
};

void setName(mahasiswa& a, string pNama) 
{
	a.nama = pNama;
}
int main()
{
   
}


