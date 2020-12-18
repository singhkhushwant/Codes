using namespace std;
class comp{
private:
  int real;
  int imaginery;
public:
  comp(int real, int imaginery)
  {
    this->real=real;
    this->imaginery=imaginery;
  }
  void display()
  {
    if(imaginery>=0)
      cout<<"Number is: "<<real<<" + i"<<imaginery<<endl;
    else
      cout<<"Number is: "<<real<<" - i"<<(-1)*(imaginery)<<endl;
  }
  void add(comp const& c)
  {
    real+= c.real;
    imaginery+= c.imaginery;
  }
  void multiply(comp const& c)
  {
    imaginery*= c.imaginery;
    real=real * c.real - imaginery;
    imaginery=real*c.imaginery+imaginery*c.real;
  }

};
