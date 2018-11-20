#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <cmath>
#include <vector>
#include <map>

using namespace std;

map<string,int> you;

int sakib_boss(string sak, string naz, string tha)
{
    vector<int> me;
    me.assign(3,0);
    me[you[sak]]++; me[you[naz]]++; me[you[tha]]++;
    // Empate
    if (me[0] == me[1] && me[1] == me[2] ) return 0;
    if (me[0] == 3) return 0;
    if (me[1] == 3) return 0;
    if (me[2] == 3) return 0;
    if (me[0] == 2 && me[1] == 1) return 0;
    if (me[1] == 2 && me[2] == 1) return 0;
    if (me[2] == 2 && me[0] == 1) return 0;
    // Dodo
    if (sak == "papel" && me[1] == 2) return 1;
    if (sak == "pedra" && me[2] == 2) return 1;
    if (sak == "tesoura" && me[0] == 2) return 1;
    // Leo
    if (naz == "papel" && me[1] == 2) return 2;
    if (naz == "pedra" && me[2] == 2) return 2;
    if (naz == "tesoura" && me[0] == 2) return 2;
    // Pepper
    if (tha == "papel" && me[1] == 2) return 3;
    if (tha == "pedra" && me[2] == 2) return 3;
    if (tha == "tesoura" && me[0] == 2) return 3;

    return -1;
}

int main ()
{
    string sak, naz,tha;
    you["papel"] = 0; you["pedra"] = 1; you["tesoura"] = 2;

    while (cin >> sak >> naz>> tha)
    {
        int victory = sakib_boss(sak,naz,tha);
        switch (victory)
        {
            case 0: cout << "Putz vei, o Leo ta demorando muito pra jogar..." << endl;
                    break;
            case 1: cout << "Os atributos dos monstros vao ser inteligencia, sabedoria..." << endl;
                    break;
            case 2: cout << "Iron Maiden's gonna get you, no matter how far!" << endl;
                    break;
            case 3: cout << "Urano perdeu algo muito precioso..." << endl;
                    break;
        }
    }
    return 0;
}
