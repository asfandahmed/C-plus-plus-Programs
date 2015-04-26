#include <iostream>
#include <iomanip>
using namespace std;
const int infinity = 32767;
enum offon{ off, on };
class tank;
class Component
{
      protected:
                int inpress, outpress;
                int inbackp, outbackp;
                int inflow, outflow;
      public:
             Component()
             {
                         inpress = 0;
                         outpress = 0;
                         inbackp = 0;
                         outbackp = 0;
                         inflow = 0;
                         outflow = 0;
             }
             virtual ~Component()
             {}
             int Flow() const
             {
                 return inflow;
             }
             friend void operator >= (Component&, Component&);
             friend void Tee(Component&, Component&, Component&);
};
class Source : public Component
{
      public:
             Source(int outp)
             {outpress = inpress = outp;}
             void Tick();
};
class Sink : public Component
{
      public:
             Sink(const int obp)
             {outbackp = inbackp = obp;}
             void Tick();
};
class Pipe : public Component
{
      private:
              int resist;
      public:
             Pipe(const int r)
             { inbackp = resist = r;}
             void Tick();
};
class Valve : public Component
{
      private:
              offon status;
      public:
             Valve(const offon s)
             {status = s;}
             offon& Status()
             {return status; }
             void Tick();
};
class Tank : public Component
{
      private:
              int contents;
              int maxoutpress;
      public:
             Tank(const int mop)
             {maxoutpress = mop; contents = 0;}
             int Contents() const
             {return contents;}
             void Tick();
};
class Switch
{
      private:
              offon status;
              int cap;
              Tank* tankptr;
      public:
             Switch(Tank* ptr, const int tcap)
             {tankptr = ptr; cap = tcap; status = off; }
             int Status() const
             { return(status); }
             void Tick()
             {status = (tankptr->Contents() > cap) ? on : off; }
};






















