#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
	int n = 5; // the number of temperatures to analyse
	

	int tA = 0;// temperatura koja je najbliza 0
	int tL = -273;// negativna temperatura najbliza 0
	int tH = 5526;// pozitivna temperatura najbliza 0
	int iL = 0;// pomak prema najblizoj negativnoj temperaturi
	int iH = 0;// pomak prema najblizoj pozitivnoj temperaturi
	int nL = 0;// broj pomaka u negativnoj temperaturi
	int nH = 0;// broj pomaka u pozitivnoj temperaturi

	for (int i = 0; i < n; i++) {
		int t; // a temperature expressed as an integer ranging from -273 to 5526
		cin >> t; cin.ignore();

		if (t == 0)
		{
			tA = t;
		}
		else

			if (t > 0 && t <= tH)
			{
				tA = t;
				tH = t;
			}
			else

				if (t < 0 && t >= tL)
				{
					tA = t;
					tL = t;
				}

		if (tH != iH)
		{
			iH++;
			nH++;
		}

		if (tL != iL)
		{
			iL--;
			nL++;
		}



		if (nL != nH && nL < nH)
		{
			tA = tL;
		}
		else

			if (nL != nH && nH < nL)
			{
				tA = tH;
			}

		/*else

		if (nL == nH)
		{
		tA = tH;
		}*/




	}

	// Write an action using cout. DON'T FORGET THE "<< endl"
	// To debug: cerr << "Debug messages..." << endl;

	system("pause");

	cout << tA << endl;

	system("pause");
}