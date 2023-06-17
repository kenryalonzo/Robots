#ifndef DEF_ROBOTS
#define DEF_ROBOTS

class Robots
{

public:
    Robots(int Abs, int Ord, int Sens);
    Robots();
    void avancer(Robots robt);
    void tourner(Robots robts);
    void jouer(Robots rbts);
    int position(int sens);
    int direction(int a);
    void print();
    void read(Robots rbt);
    void setAbs(int m_Abs);


private:
    int m_Abs;
    int m_Ord;
    int m_Sens;

};

#endif