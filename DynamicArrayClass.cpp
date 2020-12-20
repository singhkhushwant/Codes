using namespace std;
class DynamicArray{
  int *data;
  int nextIndex;
  int size;
public:
  //constructor
  DynamicArray()
  {
    data=new int[5];
    nextIndex=0;
    size=5;
  }
  //copy constructor
  //deep copying array
  DynamicArray(DynamicArray& t){
    this->size=t.size;
    this->nextIndex=t.nextIndex;
    for(int i=0;i<t.nextIndex;i++)
      this->data[i]=t.data[i];
    cout<<"COPY constructor CALLED"<<endl;
  }
  //=operator deep copying
  DynamicArray& operator=(DynamicArray&a){
    this->size=a.size;
    this->nextIndex=a.nextIndex;
    for(int i=0;i<a.nextIndex;i++)
      this->data[i]=a.data[i];
    return a;
  }
  void add(int element){
    if(nextIndex==size)
    {
      int *newdata=new int[size*2];
      for(int i=0;i<size;i++)
        newdata[i]=data[i];
      size*=2;
      delete []data;
      data=newdata;
    }
    data[nextIndex]=element;
    nextIndex++;
  }
  void get(int index){
    cout<<data[index]<<endl;
  }
  void print()
  {
    for(int i=0;i<nextIndex;i++)
      cout<<data[i]<<" ";
    cout<<endl;
  }
  void add(int element, int index){
    if(index<size)
      data[index]=element;
    else if(index==size)
      add(element);
    else
      return;
  }

};
