#ifndef DISTANCE_H
#define DISTANCE_H
class Distance
{
public:
    Distance();
    Distance(int, float);
    void getdata();
    void display();
    friend Distance operator + (Distance &ob1, Distance &ob2);
    friend Distance operator - (Distance &ob1, Distance &ob2);
    friend Distance operator *(int d, Distance &ob);
    friend int operator ==(Distance &ob1, Distance &ob2);
    friend int operator < (Distance &ob1, Distance &ob2);
    friend int operator > (Distance &ob1, Distance &ob2);
    ~Distance();
private:
    int feet;
    float inches;
};

#endif // DISTANCE_H
