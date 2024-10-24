#include <iostream>
#include <iomanip>
#include "time.h"
using namespace std;

Time::Time()
   : hour( 0 ), minute( 0 ), second( 0 )
{
    cout << "This is the default constructor of Time!!\n";
}

Time::Time(int h, int m, int s)
{
   setTime(h, m, s);
   cout << "This is the parameter constructor of Time!!\n";
}


Time::~Time()
{
    cout << "One object of Time has been deconstructed !!\n";
}
// set new Time value using universal time
void Time::setTime( int h, int m, int s )
{
   // validate hour, minute and second
   if ( ( h >= 0 && h < 24 ) && ( m >= 0 && m < 60 ) &&
      ( s >= 0 && s < 60 ) )
   {
      hour = h;
      minute = m;
      second = s;
   }
   else
      cout <<  "hour, minute and/or second was out of range\n" ;
}

// print Time in universal-time format (HH:MM:SS)
void Time::printUniversal() const
{
   cout << setfill( '0' ) << setw( 2 ) << hour << ":"
      << setw( 2 ) << minute << ":" << setw( 2 ) << second << endl;
}

// print Time in standard-time format (HH:MM:SS AM or PM)
void Time::print() const
{
   cout << ( ( hour == 0 || hour == 12 ) ? 12 : hour % 12 ) << ":"
      << setfill( '0' ) << setw( 2 ) << minute << ":" << setw( 2 )
      << second << ( hour < 12 ? " AM" : " PM" ) << endl;
}

void Time::setMinute(int m)
{
    minute = (m >= 0 && m < 60) ? m : 0;
}
void Time::setHour(int h)
{
    hour = (h >= 0 && h < 24) ? h : 0;
}

int Time::getHour()
{
    return hour;
}
int Time::getMinute()
{
    return minute;
}

