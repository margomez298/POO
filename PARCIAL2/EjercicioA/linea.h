#ifndef LINEA_H
#define LINEA_H


class Linea
{
public:
    Linea(int xi = 0, int yi = 0, int xf = 0, int yf = 0);
    int getX_inicial() const;
    int getY_inicial() const;
    int getX_final() const;
    int getY_final() const;

    void setX_final(const int x);
    void setY_final(const int y);


private:
   int x_inicial,y_inicial;
   int x_final,y_final;



};

#endif // LINEA_H
