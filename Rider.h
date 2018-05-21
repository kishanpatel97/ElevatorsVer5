//Programmer: Kishan Patel
//Programmer ID: 1526466

#ifndef Rider_h
#define Rider_h

struct Rider
{
  const int from;
  const int to;
  bool goingUp;
  bool goingDown;
  Rider(int, int); 
  Rider& operator=(const Rider&);
};
#endif
