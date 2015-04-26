#include "pipes.h"
void operator >= (Component& c1, Component& c2)
{
     c2.inpress = c1.outpress;
     c1.inbackp = c2.outbackp;
}
void Tee(Component& src, Component& c1, Component& c2)
{
     if( (c1.outbackp==0 && c2.outbackp==0) || (c1.outbackp==0 && c2.outbackp==0) )
     {
         c1.inpress = c2.inpress = 0;
         src.inbackp = 0;
         c1.inflow = c2.inflow = 0;
         return;
     }
     float f1 = (float) (c1.outbackp / (c1.outbackp + c2.outbackp));
     float f2 = (float) (c2.outbackp /(c1.outbackp + c2.outbackp));
     c1.inpress = (int)(src.outpress * f1);
     c2.inpress = (int)(src.outpress * f2);
     src.inbackp = c1.outbackp + c2.outbackp;
     c1.inflow = (int)(src.outflow * f1);
     c2.inflow = (int)(src.outflow * f2);
}
void Source::Tick()
{
     outbackp = inbackp;
     outflow = (outpress < outbackp) ? outpress : outbackp;
     inflow = outflow;
}
void Sink::Tick()
{
     outpress = inpress;
     outflow = (outbackp < outpress) ? outbackp : outpress;
     inflow = outflow;
}
void Pipe::Tick(void)
{
     outpress = (inpress < resist) ? inpress : resist;
     outbackp = (inbackp < resist) ? inbackp : resist;
     
     if(outpress < outbackp && outpress < resist)
                { outflow = outpress;}
     else if (outbackp < outpress && outbackp < resist)
                       {outflow = outbackp;}
     else
         {outflow = resist;}
}
void Valve::Tick(void)
{
     if(status == on)
     {
               outpress = inpress;
               outbackp = inbackp;
               outflow = (outpress < outbackp) ? outpress : outbackp;
     }
     else
     {
         outflow = 0;
         outbackp = 0;
         outpress = 0;
     }
}
void Tank::Tick(void)
{
     outbackp = infinity;
     if(contents > 0)
     {
                 outpress = (maxoutpress < inbackp) ? maxoutpress : inbackp;
                 outflow = outpress;
     }
     else
     {
         outpress = 0;
         outflow = 0;
     }
     contents += inflow - outflow;
}
