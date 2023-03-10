// dynamic_cast
#include <iostream>
#include <exception>
using namespace std;

class CBase { virtual void dummy() {} };
class CDerived: public CBase { int a; };

int main () {
  try {
    CBase * pba = new CDerived;
    CBase * pbb = new CBase;
    CDerived * pd;

    pd = dynamic_cast<CDerived*>(pba);
    if (pd==0) cout << "Null pointer on first type-cast" << endl;

    pd = dynamic_cast<CDerived*>(pbb);
    if (pd==0) cout << "Null pointer on second type-cast" << endl;

  } catch (exception& e) {cout << "Exception: " << e.what();}

  double d=3.14159265;
  int i = static_cast<int>(d);
  cout << "D: " << d << ", i: " << i << endl;
  
  CBase * a = new CBase;
  CDerived * b = static_cast<CDerived*>(a);
  if(b==0) cout << "Null pointer on static type-cast" << endl; // No checking in Static Cast

  return 0;
}