//Programmer: Kishan Patel
//Programmer ID: 1526466

#ifndef Panel_h
#define Panel_h

#include <string>
#include <vector>
using namespace std;

class Panel{
  struct Button{
    string label;
    bool lit;
    int seqNum;
    static int totalNumPress;
  };

public:
  vector<Button> buttons; //now diff
  friend ostream& operator<<(ostream&, const Panel&);
  void addButton(string);
  void press(string);
  void clear(string);
  string getFirstLit() const;
  bool isLit(string) const;
  bool areAnyLit() const;
};
#endif
