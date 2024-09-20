#include<iostream>

using namespace std;

int main()
{
      //declare variable type float and char
      float a,b,area;
      char ch;
      while (ch!='x')
            {
                  //Input the choice.
                  cout<<"Enter c for circle"<<endl;
                  cout<<"Enter s for square"<<endl;
                  cout<<"Enter r for rectangle"<<endl;
                  cout<<"Enter t for triangle"<<endl;
                  cout <<"Enter x to exit" << endl;
                  cin>>ch;
                  //conditional switch statement.
                 if (ch =='c')
                 {
                       cout<<"Enter radius"<<endl;
                       cin>>a;
                       area=3.14*a*a;
                 }
                 if (ch=='s')
                 {
                       cout<<"Enter the side"<<endl;
                       cin>>a;
                       area=a*a;
                 }

                 if (ch=='r')
                 {
                       cout<<"Enter the length"<<endl;
                       cin>>a;
                       cout<<"Enter the breadth"<<endl;
                       cin>>b;
                       area=a*b;
                 }
                if (ch=='t')
                {

                       cout<<"Enter the height"<<endl;
                       cin>>a;
                       cout<<"Enter the base"<<endl;
                       cin>>b;
                       area=0.5*a*b;
                }

                if (ch !='c' && ch!='r' && ch!='s' && ch!='t' && ch!='x')
                {
                       cout<<"Syntax Error"; ch =='c';
                       continue;
               }


                if (ch=='x')
                  break;
                cout<<"Area is "<<area<<endl;
           }


}
//@ convert the program using a switch statement
//@ add one more option to calculate the area of rhombus

