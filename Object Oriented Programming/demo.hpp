class demo
{
private:
    /* data */
public:
    demo(/* args */);
    ~demo();
    double length;
    double height;
    void setLength(double len);
    double getLength(void);
};
//成员函数定义

double demo::getLength(void)
{
    return length;
}
void demo::setLength(double len)
{
    length = len;
}
