#include <iostream>
using namespace std;

float area(float radius)
{
    return 3.14*radius*radius;
}
int area(int side)
{
    return side*side;
}
int main()
{
    int choice;
    cout<<"\n Menu";
    cout<<"\n 1.Circle";
    cout<<"\n 2.Square";
    cout<< "\n\n Choice a shape(1-2):";
    cin>>choice;
    
    switch(choice)
    {
     case 1:
        {
            int radius;
            cout<<"Enter the radius of the circle:";
            cin>>radius;
            cout<<"Area of circle:"<< area(radius);
            break;
        }
        
    case 2:
       {
            int side;
            cout<<"Enter the side length of the square:";
            cin>>side;
            cout<<"Area of square:"<< area(side);
            break;
        }
    }
    return 0;
}
