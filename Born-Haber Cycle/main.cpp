#include <iostream>

using namespace std;

enum atom_code
{
    F, Cl, Br, I, At, Ts,
    O, S, Se, Te, Po,
    N, P, As, Sb, Bi,
    C, Si, Ge, Sn, Pb,
    B, Al,
    H,

    //Metals
    Li, Na, K, Rb,
    Be, Mg, Ca, Sr,
};

atom_code hashit (string const& inString)
{
    if (inString == "F") return F;
    if (inString == "Cl") return Cl;
    if (inString == "I") return Br;
    if (inString == "At") return At;
    if (inString == "Ts") return Ts;
    if (inString == "O") return O;
    if (inString == "S") return S;
    if (inString == "Se") return Se;
    if (inString == "Te") return Te;
    if (inString == "Po") return Po;
    if (inString == "N") return N;
    if (inString == "P") return P;
    if (inString == "As") return As;
    if (inString == "Sb") return Sb;
    if (inString == "Bi") return Bi;
    if (inString == "C") return C;
    if (inString == "Si") return Si;
    if (inString == "Ge") return Ge;
    if (inString == "Sn") return Sn;
    if (inString == "Pb") return Pb;
    if (inString == "B") return B;
    if (inString == "Al") return Al;

    if (inString == "H") return H;

    if (inString == "Li") return Li;
    if (inString == "Na") return Na;
    if (inString == "K") return K;
    if (inString == "Rb") return Rb;
    if (inString == "Be") return Be;
    if (inString == "Mg") return Mg;
    if (inString == "Ca") return Ca;
    if (inString == "Sr") return Sr;
}

int energy_val (auto atomic_element)
{
    auto e = hashit(atomic_element);
    int t = 0;

    if (e == Li || e == Na || e == K || e == Rb)
        t = 1;
    else if (e == Be || e == Mg || e == Ca || e == Sr)
        t = 2;

    return t;
}

int atomization_enthalpy (auto atomic_element)
{
    int num = 0;

    switch (hashit(atomic_element))
    {
    case F:
        num = 79;
        break;
    case Cl:
        num = 122;
        break;
    case Br:
        num = 112;
        break;
    case I:
        num = 107;
        break;
    case O:
        num = 249;
        break;
    case S:
        num = 279;
        break;
    case Se:
        num = 227;
        break;
    case Te:
        num = 197;
        break;
    case N:
        num = 473;
        break;
    case P:
        num = 315;
        break;
    case As:
        num = 302;
        break;
    case Sb:
        num = 262;
        break;
    case Bi:
        num = 207;
        break;
    case C:
        num = 717;
        break;
    case Si:
        num = 456;
        break;
    case Ge:
        num = 377;
        break;
    case Sn:
        num = 302;
        break;
    case Pb:
        num = 195;
        break;
    case B:
        num = 563;
        break;
    case Al:
        num = 326;
        break;
    case H:
        num = 218;
        break;
    case Li:
        num = 159;
        break;
    case Na:
        num = 107;
        break;
    case K:
        num = 89;
        break;
    case Rb:
        num = 81;
        break;
    case Be:
        num = 324;
        break;
    case Mg:
        num = 146;
        break;
    case Ca:
        num = 178;
        break;
    case Sr:
        num = 164;
        break;
    }

    return num;
}

float first_ionization (auto atomic_element)
{
    float num = 0;

    switch (hashit(atomic_element))
    {
    case Li:
        num = 520.22;
        break;
    case Na:
        num = 495.85;
        break;
    case K:
        num = 418.81;
        break;
    case Rb:
        num = 403.03;
        break;
    case Be:
        num = 899.50;
        break;
    case Mg:
        num = 737.75;
        break;
    case Ca:
        num = 589.83;
        break;
    case Sr:
        num = 549.47;
        break;
    }

    return num;
}

float second_ionization (auto atomic_element)
{
    float num = 0;

    switch (hashit(atomic_element))
    {
    case Be:
        num = 1757.11;
        break;
    case Mg:
        num = 1450.68;
        break;
    case Ca:
        num = 1145.45;
        break;
    case Sr:
        num = 1064.26;
        break;
    }

    return num;
}

float electron_affinity (auto atomic_element)
{
    float num = 0;
    switch (hashit(atomic_element))
    {
    case F:
        num = -328;
        break;
    case Cl:
        num = -349.0;
        break;
    case Br:
        num = -324.6;
        break;
    case I:
        num = -295.2;
        break;
    case O:
        num = -141;
        break;
    case S:
        num = -200;
        break;
    case Se:
        num = -195.0;
        break;
    case Te:
        num = -190.2;
        break;
    case N:
        num = -7;
        break;
    case P:
        num = -72;
        break;
    case As:
        num = -78;
        break;
    case Sb:
        num = -103.2;
        break;
    case Bi:
        num = -91.2;
        break;
    case C:
        num = -153.9;
        break;
    case Si:
        num = -133.6;
        break;
    case Ge:
        num = -119;
        break;
    case Sn:
        num = -107.3;
        break;
    case Pb:
        num = -35.1;
        break;
    case B:
        num = -26.7;
        break;
    case Al:
        num = -42.5;
        break;
    case H:
        num = -72.8;
        break;
    }

    return num;
}

int lattice_enthalpy (auto metal_ion, auto non_metal_ion)
{
    int num = 0;

    auto metal = hashit(metal_ion);
    auto non_metal = hashit(non_metal_ion);

    if (metal == Li && non_metal == F)
        num = 1049;
    else if (metal == Li && non_metal == Cl)
        num = 864;
    else if (metal == Li && non_metal == Br)
        num = 820;
    else if (metal == Li && non_metal == I)
        num = 764;
    else if (metal == Li && non_metal == H)
        num = 920;
    else if (metal == Li && non_metal == O)
        num = 0;

    else if (metal == Na && non_metal == F)
        num = 930;
    else if (metal == Na && non_metal == Cl)
        num = 790;
    else if (metal == Na && non_metal == Br)
        num = 754;
    else if (metal == Na && non_metal == I)
        num = 705;
    else if (metal == Na && non_metal == H)
        num = 808;
    else if (metal == Na && non_metal == O)
        num = 0;

    else if (metal == K && non_metal == F)
        num = 829;
    else if (metal == K && non_metal == Cl)
        num = 720;
    else if (metal == K && non_metal == Br)
        num = 691;
    else if (metal == K && non_metal == I)
        num = 650;
    else if (metal == K && non_metal == H)
        num = 714;
    else if (metal == K && non_metal == O)
        num = 0;

    else if (metal == Rb && non_metal == F)
        num = 795;
    else if (metal == Rb && non_metal == Cl)
        num = 695;
    else if (metal == Rb && non_metal == Br)
        num = 668;
    else if (metal == Rb && non_metal == I)
        num = 632;
    else if (metal == Rb && non_metal == H)
        num = 685;
    else if (metal == Rb && non_metal == O)
        num = 0;

    else if (metal == Be && non_metal == F)
        num = 3505;
    else if (metal == Be && non_metal == Cl)
        num = 3020;
    else if (metal == Be && non_metal == Br)
        num = 2914;
    else if (metal == Be && non_metal == I)
        num = 2800;
    else if (metal == Be && non_metal == H)
        num = 3295;
    else if (metal == Be && non_metal == O)
        num = 4443;

    else if (metal == Mg && non_metal == F)
        num = 2957;
    else if (metal == Mg && non_metal == Cl)
        num = 2526;
    else if (metal == Mg && non_metal == Br)
        num = 2440;
    else if (metal == Mg && non_metal == I)
        num = 2706;
    else if (metal == Mg && non_metal == H)
        num = 3791;
    else if (metal == Mg && non_metal == O)
        num = 3356;

    else if (metal == Ca && non_metal == F)
        num = 2630;
    else if (metal == Ca && non_metal == Cl)
        num = 2258;
    else if (metal == Ca && non_metal == Br)
        num = 2176;
    else if (metal == Ca && non_metal == I)
        num = 2074;
    else if (metal == Ca && non_metal == H)
        num = 2394;
    else if (metal == Ca && non_metal == O)
        num = 3401;

    else if (metal == Sr && non_metal == F)
        num = 2492;
    else if (metal == Sr && non_metal == Cl)
        num = 2156;
    else if (metal == Sr && non_metal == Br)
        num = 2075;
    else if (metal == Sr && non_metal == I)
        num = 1963;
    else if (metal == Sr && non_metal == H)
        num = 2253;
    else if (metal == Sr && non_metal == O)
        num = 3223;
    return num;
}

bool isDiatom (auto atomic_element)
{
    auto e = hashit(atomic_element);
    if (e == Cl || e == F || e == Br || e == O || e == H || e == I)
        return true;
    return false;
}

int main()
{
    string Ionic_Compund;
    string M_element;
    string X_element;

    int M_at = 0; // enthalpy of atomization for metal
    int X_at = 0; // enthalpy of atomization for non-meta
    float ie = 0; //ionization energy for metal
    int t = 0;
    float ea = 0; // electron affinity for non-metals
    int lat = 0; //lattice enthalpy
    int formation = 0; //enthalpy of formation



    cout << "Enter an ionic compound and its components" << endl;
    cin>> Ionic_Compund >> M_element >> X_element;

    M_at = atomization_enthalpy(M_element);
    //cout << M_element << " " << M_at << endl;
    X_at = atomization_enthalpy(X_element);
    //cout << X_element << " " << X_at << endl;

    //Determines ionization energy
    t = energy_val(M_element);

    //Present first equation
    cout << "First Equation" << endl;

    if (isDiatom(X_element) && t == 2)
        cout << M_element << "(s) + "<< X_element << "2(g)" << endl;
    else if (isDiatom(X_element) && t == 1)
        cout << M_element << "(s) + 1/2 " << X_element << "2(g)" << endl;
    else
        cout << M_element << "(s) + "<< X_element << "(g)" << endl;
    cout << endl;

    //Determine ionization energy
    if (t == 1)
    {
        ie = first_ionization(M_element);
        lat = lattice_enthalpy(M_element, X_element);
    }
    else if (t == 2)
    {
        ie = first_ionization(M_element) + second_ionization(M_element);
        lat = lattice_enthalpy(M_element, X_element);
    }

    //Determine electron affinity
    ea = t * electron_affinity(X_element);

    //Present atomization of metal
    cout << "Enthalpy Change of Atomization " << M_element << endl;

    if (isDiatom(X_element) && t == 2)
        cout << M_element << "(g) + "<< X_element << "2(g)" << " " << "delta H at = " << M_at << "kJ/mol" << endl;
    else if (isDiatom(X_element) && t == 1)
        cout << M_element << "(g) + 1/2 " << X_element << "2(g)" << " " << "delta H at = " << M_at << "kJ/mol" << endl;
    else
        cout << M_element << "(g) + "<< X_element << "(g)" <<  " " << "delta H at = " << M_at << "kJ/mol" << endl;
    cout << endl;

    //Present ionization energy
    cout << "Enthalpy Change of Ionization of Metal" << endl;

    if (isDiatom(X_element) && t == 2)
        cout << M_element << "+2 (g) + "<< X_element << "2(g)" << " + 2e- " << "delta H ie = " << ie << "kJ/mol" << endl;
    else if (isDiatom(X_element) && t == 1)
        cout << M_element << "+1 (g) + 1/2 " << X_element << "2(g)" << " + e- " << "delta H ie = " << ie << "kJ/mol" << endl;
    else
        cout << M_element << "(g) + "<< X_element << "(g)" <<  " + e- " << "delta H ie = " << ie << "kJ/mol" << endl;
    cout << endl;

    //Present atomization of non-metal
    cout << "Enthalpy Change of Ionization of Non-Metal" << endl;

    if (isDiatom(X_element) && t == 1)
        cout << M_element << "+1 (g) + "<< X_element << "(g)" << " + e- " << "delta H at = " << X_at << "kJ/mol" << endl;
    else if (isDiatom(X_element) && t == 2)
        cout << M_element << "+2 (g) + 2" << X_element << "(g)" << " + 2e- " << "delta H at = " << X_at << "kJ/mol" << endl;
    else
        cout << M_element << "+1 (g) + "<< X_element << "(g)" <<  " + e- " << "delta H at = " << X_at << "kJ/mol" << endl;
    cout << endl;

    //electron affinity
    cout << "Enthalpy Change of Electron Affinity" << endl;

    if (isDiatom(X_element) && t == 1)
        cout << M_element << "+1(g) + "<<X_element<<"-(g) " << "delta H ea = " << ea << "kJ/mol" << endl;
    else if (isDiatom(X_element) && t == 2)
        cout << M_element << "+2(g) + "<<X_element<<"2-(g) " << "delta H ea = "<<ea << "kJ/mol" << endl;
    else
        cout << M_element << "+1(g) + "<<X_element<<"-(g) "<< "delta H ea = "<< ea << "kJ/mol" << endl;
    cout << endl;

    formation = M_at + ie + X_at + ea - lat;

    cout << "Enthalpy of formation for " << Ionic_Compund<< " is " << formation << "kJ/mol" << endl;

    return 0;
}
