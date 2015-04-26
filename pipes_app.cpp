#include <conio.h>
#include "pipes.cpp"
int main()
{
    char ch = 'a';
    Source src(100);
    Pipe pipe1(80);
    Valve valve1(on);
    Tank tank1(60);
    Switch switch1(&tank1, 300);
    Switch switch2(&tank1, 50);
    Pipe pipe2(80);
    Sink sink1(30);
    Pipe pipe3(40);
    Valve valve2(on);
    Tank tank2(80);
    Switch switch3(&tank2, 250);
    Switch switch4(&tank2, 50);
    Sink sink2(20);
    cout << "Press Enter for new time tick, 'x' to exit\n";
    while( ch != 'x')
    {
           src >= pipe1;
           pipe1 >= valve1;
           valve1 >= tank1;
           Tee(tank1, pipe2, pipe3);
           pipe2 >= sink1;
           pipe3 >= valve2;
           valve2 >= tank2;
           tank2 >= sink2;
           src.Tick();
           pipe1.Tick();
           valve1.Tick();
           tank1.Tick();
           switch1.Tick();
           switch2.Tick();
           pipe2.Tick();
           sink1.Tick();
           pipe3.Tick();
           valve2.Tick();
           tank2.Tick();
           switch3.Tick();
           switch4.Tick();
           sink2.Tick();
           if( valve1.Status()==on && switch1.Status()==on )
           {valve1.Status() = off;}
           if( valve1.Status()==off && switch2.Status()==off )
           {valve1.Status() = on;}
           if( valve2.Status()==on && switch3.Status()==on )
           {valve2.Status() = off;}
           if( valve2.Status()==off && switch4.Status()==off )
           {valve2.Status() = on;}
           cout << "Src=" << setw(2) << src.Flow();
           cout << " P1=" << setw(2) << pipe1.Flow();
           if( valve1.Status()==off )
           {cout << " V1=off";}
           else
           {cout << " V1=on ";}
           cout << " T1=" << setw(3) << tank1.Contents();
           cout << " P2=" << setw(2) << pipe2.Flow();
           cout << " Snk1=" << setw(2) << sink1.Flow();
           cout << " P3=" << setw(2) << pipe3.Flow();
           if( valve2.Status()==off )
           {cout << " V2=off";}
           else
           {cout << " V2=on ";}
           cout << " T2=" << setw(3) << tank2.Contents();
           cout << " Snk2=" << setw(2) << sink2.Flow();
           ch = getch();
           cout << '\n';
    }
    getch();
    return 0;
}
