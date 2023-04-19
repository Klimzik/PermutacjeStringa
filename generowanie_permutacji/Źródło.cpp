#include <iostream>
#include <string>
using namespace std;

void generowanie_permutacji(string testStr, string pomoc, int size_stringa)
{
	for (int i{ 0 }; i < testStr.size(); i++)
	{											//permutacja - nasz finalny efekt w postaci jednego s³owa, jest za kazdym wywowa³em "aktu
		string permutacja = pomoc;				  //pomoc to jest to co jest generowane przed permutacjami czyli jesli robimy permurtacje 
		string kopia = testStr;					  //dla testStr='marek' i jestesmy na r to pomoc pamieta nam mar zeby zrobic permutacje dla ek      
		permutacja += testStr[i];				//kopia jest to kopia aktualnie prztwarzanego stringa ale skracana za kazdym razem o jeden znak ktory juz uzylismy
		kopia.erase(kopia.begin() + i);    
 		generowanie_permutacji(kopia, permutacja, size_stringa);
		if (permutacja.size() == size_stringa)
		{
			cout << permutacja << "  ";
		}
	}
}

void generowanie_permutacji(string testStr)
{
	generowanie_permutacji(testStr, "", testStr.size());
}

int main()
{
	string wyraz;
	cout << "Podaj string: ";
	cin >> wyraz;
	generowanie_permutacji(wyraz);
}