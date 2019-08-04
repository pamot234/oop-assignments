#include <iostream>

using namespace std;

  template<class datatype>

    void swap(datatype &n1,datatype &n2)
    {
        datatype temp;
        temp=n1;
        n1=n2;
        n2=temp;
    }
    int main()
    {
        int i1,i2;
        float f1,f2;
        char c1,c2;
        cout<<"enter two integers :"<<endl;
        cin>>i1>>i2;
        cout<<"enter two float numbers :"<<endl;
        cin>>f1>>f2;
        cout<<"enter two characters :"<<endl;
        cin>>c1>>c2;
        cout<<endl<<"before swapping :"<<endl;
        cout<<"i1 :"<<i1<<" "<<"i2 :"<<" "<<i2<<endl;
        cout<<"f1 :"<<f1<<" "<<"f2 :"<<" "<<f2<<endl;
        cout<<"c1 :"<<c1<<" "<<"c2 :"<<" "<<c2<<endl;
        swap(i1,i2);
        swap(f1,f2);
        swap(c1,c2);
        cout<<"after swapping :"<<endl;
        cout<<"i1 :"<<i1<<" "<<"i2 :"<<" "<<i2<<endl;
        cout<<"f1 :"<<f1<<" "<<"f2 :"<<" "<<f2<<endl;
        cout<<"c1 :"<<c1<<" "<<"c2 :"<<" "<<c2<<endl;
        return 0;
    }










