//Q1. Find the output for this code. Let input:- 2 3 6
#include <iostream>
using namespace std;
int main()
{
int x;
cout << "Enter first number\n";
cin >> x; // user will give ‘x’ a value.
int y, m;
cout << "Enter second number and value for taking modulus\n";
cin >> y >> m; // user will give ‘y’ a value.
int Z = (x * y) % m;
cout << "Output is: " << Z;
}
//output : "Ouput is 0" 


//Q2. Find the output for this code. Let input:- 3 2
#include <iostream>
using namespace std;
int main()
{
int x;
cout<<"Enter first number\n";
cin>>x; // user will give 'x' a value.
int y;
cout<<"Enter second number\n";
cin>>y; // user will give 'y' a value.
cout<<(x!=y)<<" "<<(x>=y);
}
//output : 1 1


//Q3. Find the output for this code. Let input:- 2 3
#include <iostream>
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
x+=y;
x-=y;
x%=y;
cout<<x;
}
//Ouput : 2


//Q4. WAP for finding the volume of the cylinder by taking radius and height as input.
#include<iostream>
using namespace std;
int main(){
    int r,h; // r is radius, h is height
    float pi = 3.14,v; //v is volume
    cout<<"Radius of the cylinder is : ";
    cin>>r;
    cout<<"Height of the cylinder is : ";
    cin>>h;
    v = pi*r*r*h;
    cout<<"VOlume of cylinder is "<<v;
    return 0;
}


//Q5. WAP to find the difference between ASCII of two characters ,take them as input.
#include<iostream>
using namespace std;
int main(){
    char a1,a2;
    cout<<"Enter the value of a1 : ";
    cin>>a1;
    cout<<"Enter the value of a2 : ";
    cin>>a2;
    int d = (int)a1 - (int)a2;
    cout<<"Difference in ascii values is "<<d;
    return 0;
}


//Q6. Find the output of the below code
#include <iostream>
using namespace std;
int main()
{
int i = ( 4 + 7 / 5 * 6 * 6+9 )% 100 ;
cout<<i;
}
//Output : 49