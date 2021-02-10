#include <bits/stdc++.h>
#include <string.h>

using namespace std;

class TAXPAYER
{
private:
    char Name[30];
    char PanNo[30];
    float Taxabincm;
    double TotTax;
    void CompTax()
    {
        if (Taxabincm > 500000)
            TotTax = Taxabincm * 0.15;
        else if (Taxabincm > 300000)
            TotTax = Taxabincm * 0.1;
        else if (Taxabincm > 160000)
            TotTax = Taxabincm * 0.05;
        else TotTax = 0.0;
    }

public:
    TAXPAYER(char nm[], char pan[], float tax, double ttax) //parameterized constructor
    {
        // Name = nm;
        strcpy(Name, nm);
        strcpy(PanNo, pan);
        Taxabincm = tax;
        TotTax = ttax;
    }

    void INTAX()
    {
        // getline(cin, Name);
        gets(Name);
        cin >> PanNo >> Taxabincm;
        CompTax();
    }

    void OUTAX()

    {
        cout << Name 
             <<endl
             << PanNo 
             <<endl
             << Taxabincm 
             <<endl
             << TotTax 
             << endl;
    }
};