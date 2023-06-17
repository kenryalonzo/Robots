#include <iostream>
#include "Robots.hpp"

using namespace std;

Robots :: Robots(int Abs, int Ord, int Sens)
{
    m_Abs = Abs;
    m_Ord = Ord;
    m_Sens =Sens;
}

Robots :: Robots()
{
    m_Abs = 0;
    m_Ord = 0;
    m_Sens = 0;
}

int Robots :: position(int sens)
{
    switch (sens)
    {
    case 0: 
        sens = 1;
        break;
    case 1: 
        sens = 2;
        break;
    case 2: 
        sens = 3;
        break;
    case 3: 
        sens = 0;
        break;
    }
    return sens;
          
}

int Robots ::direction(int sens)
{

    switch (sens)
    {
    case 0: 
        sens = 3;
        break;
    case 1: 
        sens = 0;
        break;
    case 2: 
        sens = 1;
        break;
    case 3: 
        sens = 2;
        break;
    }
    return sens;
}
void Robots::setAbs(int m_Abs){
    m_Abs = this-> m_Abs ;
}

void Robots :: avancer(Robots robt)
{
    if (m_Sens == 0)
    {
        m_Abs = m_Abs;
        m_Ord += 1;
        m_Sens = m_Sens;
    }
    else if (m_Sens == 1)
    {
        m_Abs += 1;
        m_Ord = m_Ord;
        m_Sens = m_Sens;
    }
    else if (m_Sens == 2)
    {
        m_Abs = m_Abs;
        m_Ord -= m_Ord;
        m_Sens = m_Sens;
    }
    else if (m_Sens == 3)
    {
        m_Abs -= m_Abs;
        m_Ord = m_Ord;
        m_Sens = m_Sens;
    }
    else
    {
       cout << "Il ne peut y avoir que 04 directions : Nord = 0; Est = 1; Sud = 2; Oeust = 3;" << endl; 
    }
    
    
}

void Robots :: tourner(Robots robts)
{
    m_Abs = m_Abs;
    m_Ord = m_Ord;
    m_Sens = robts.position(m_Sens);
}

void Robots :: jouer(Robots rbts)
{
    m_Abs = m_Abs;
    m_Ord = m_Ord;
    m_Sens = rbts.direction(m_Sens);
}

void Robots ::print()
{
    cout << "Robots (" << m_Abs << "," << m_Ord << "," << m_Sens << ")" << endl;
}


void Robots :: read(Robots rbt)
{
    cout << "Entrez tres rapidement les informations du robots" << endl;
    cout << "Entrez l'abscisse : " << endl;
    cin >> rbt.m_Abs;
    cout << "Entrez l'ordonne : " << endl;
    cin >> rbt.m_Ord;
    cout << "Entrez le sens : " << endl;
    cin >> rbt.m_Sens;
    cout << "Voici les infos que vous avez fournir sur le Robots" << endl;
    rbt.print();
}