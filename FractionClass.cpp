using namespace std;
class Fraction{
private:
  int numerator;
  int denominator;
public:
  Fraction(int numerator, int denominator)
  {
    if(denominator==0)
    {
      cout<<"Wrong denominator"<<endl;
      return;
    }
    this->numerator=numerator;
    this->denominator=denominator;
  }
  void display()
  {
    cout<<"Fraction is: "<<numerator<<"/"<<denominator<<endl;
  }
  void simplify()
  {
    int gcd=1;
    int j=min(numerator,denominator);
    for(int i=1;i<=j;i++)
    {
      if(numerator%i==0 && denominator%i==0)
        gcd=i;
    }
    numerator=numerator/gcd;
    denominator=denominator/gcd;
  }
  void add(Fraction const& f)
  {
    int lcm=denominator * f.denominator;
    int x=lcm/denominator;
    int y=lcm/f.denominator;
    numerator=(x*numerator)+(y*f.numerator);
    denominator=lcm;
    simplify();
  }
  void multiply(Fraction const& f)
  {
    numerator=numerator * f.numerator;
    denominator=denominator * f.denominator;
    simplify();
  }
};
