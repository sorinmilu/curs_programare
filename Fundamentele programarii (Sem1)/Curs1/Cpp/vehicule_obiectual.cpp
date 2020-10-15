/*

   Programul trebuie intai compilat, se obtine un executabil care apoi se poate executa singur
   Compilarea se face:
    linux (gcc): g++ -Wall -o vehicule_obiectual vehicule_obiectual.cpp

*/


#include <cstdint>
#include <functional>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Conducator and Vehicul depind una de cealalta, declaram Vehicul inainte
class Vehicul;

class Conducator
{
private:
	string m_name{};
	vector<reference_wrapper<const Vehicul>> m_Vehicul{};

public:
	Conducator(const string& name) :
		m_name{ name }
	{
	}

	void addVehicul(Vehicul& Vehicul);

	//friend function - o functie careia i se da dreptul sa acceseze membrii privati si protejati ai unui obiect
	friend ostream& operator<<(ostream &out, const Conducator &Conducator);

	const string& getName() const { return m_name; }
};

class Vehicul
{
private:
	string m_name{};
	vector<reference_wrapper<const Conducator>> m_Conducator{};

	// addConducator ramane privata - aceasta nu va fi folosita de public.
	// Toata lumea va utiliza Conducator::addVehicul() care este expusa public
	void addConducator(const Conducator& Conducator)
	{
		m_Conducator.push_back(Conducator);
	}

public:
	Vehicul(const string& name)
		: m_name{ name }
	{
	}

	friend ostream& operator<<(ostream &out, const Vehicul &Vehicul);
	const string& getName() const { return m_name; }

	// Ne imprietenim cu Conducator::addVehicul() ca sa poata accesa functia privata Vehicul::addConducator()
	friend void Conducator::addVehicul(Vehicul& Vehicul);
};

void Conducator::addVehicul(Vehicul& Vehicul)
{
	// conducatorul isi va adauga acest vehicul
	m_Vehicul.push_back(Vehicul);

	// si vehiculul se va adauga la obiectul
	Vehicul.addConducator(*this);
}

//functie care supraincarca operatorul << pentru Conducator

ostream& operator<<(ostream &out, const Conducator &Conducator)
{
	if (Conducator.m_Vehicul.empty())
	{
		out << Conducator.m_name << " nu conduce nimic";
		return out;
	}

	out << Conducator.m_name << " conduce: ";
	for (const auto& Vehicul : Conducator.m_Vehicul)
		out << Vehicul.get().getName() << ' ';

	return out;
}

//functie care supraincarca operatorul << pentru Vehicul

ostream& operator<<(ostream &out, const Vehicul &Vehicul)
{
	if (Vehicul.m_Conducator.empty())
	{
		out << Vehicul.getName() << " nu este condus de nimeni";
		return out;
	}

	out << Vehicul.m_name << " este condus de: ";
	for (const auto& Conducator : Vehicul.m_Conducator)
		out << Conducator.get().getName() << ' ';

	return out;
}

int main()
{

	Vehicul bicicleta{ "Bicicleta" };
	Vehicul trotineta{ "Trotineta" };
	Vehicul masina{ "Masina" };
 	Vehicul vapor{ "Vapor" };
	Vehicul role{ "Role" };
	Vehicul avion{ "Avion" };

	Conducator lulu{ "Lulu" };
	Conducator judith{ "Judith" };
	Conducator aladin{ "Alladin" };
	Conducator heidi{ "Heidi" };

	lulu.addVehicul(bicicleta);
	lulu.addVehicul(masina);

	judith.addVehicul(trotineta);
	judith.addVehicul(vapor);
	aladin.addVehicul(trotineta);
	aladin.addVehicul(role);
	aladin.addVehicul(bicicleta);
	heidi.addVehicul(avion);
	heidi.addVehicul(role);
	heidi.addVehicul(bicicleta);

	cout << bicicleta << '\n';

	return 0;
}

