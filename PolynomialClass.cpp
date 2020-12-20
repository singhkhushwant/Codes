using namespace std;

class PolynomialClass{
  int *coefficient;
  int *degree;
  int size;
public:
  PolynomialClass(){
    coefficient=new int[3];
    degree=new int[3];
    for(int i=0;i<3;i++){
      coefficient[i]=0;
      degree[i]=0;
    }
    size=3;
  }
  void set(int c,int d){
    if(d>=size){
      int *newcoefficient=new int[size*2];
      int *newdegree=new int[size*2];
      for(int i=0;i<size;i++){
        newcoefficient[i]=coefficient[i];
        newdegree[i]=this->degree[i];
      }
      delete []degree;
      delete []coefficient;
      size*=2;
      degree=newdegree;
      coefficient=newcoefficient;
    }
    coefficient[d]+=c;
  }
  void print(){
    for(int i=size-1;i>=0;i--){
      if(coefficient[i]==0)
        continue;
      if(coefficient[i]>0)
        cout<<"+"<<coefficient[i]<<"X^"<<i;
      else
        cout<<"-"<<coefficient[i]<<"X^"<<i;
    }
  }
};
