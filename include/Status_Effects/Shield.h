#ifndef SHIELD_H_INCLUDED
#define SHIELD_H_INCLUDED

namespace lab3 {
  using namespace std;

  class Shield {
  public:
    Shield() {}
    int get_armor() {return _armor;}
    void set_armor(int armor) {_armor = armor;}
    virtual ~Shield() {}
  private:
  protected:
    int _armor;
  };
}


#endif // SHIELD_H_INCLUDED
