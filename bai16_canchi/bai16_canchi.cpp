#include <iostream>
using namespace std;
int main()
{
	int nam, socan, sochi;
	cout << "12 con giap tu nam 2000 den 2024:\n";
	string can[] { "Canh", "Tan", "Nham", "Quy", "Giap", "At", "Binh", "Dinh", "Mau", "Ki"};
	string chi[] { "Than", "Dau", "Tuat", "Hoi", "Ty"," Suu", "Dan", "Mao", "Thin", "Ti", "Ngon", "Mui"};


	for (int nam = 2000; nam <= 2024; nam++)
	{
		socan = nam % 10;
		sochi = nam % 12;
		cout << "nam " <<nam<<": " << can[socan]<<"\t";
		cout << chi[sochi]<<"\n";
	}
	return 0;
}