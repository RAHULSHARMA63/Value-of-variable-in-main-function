#include <iostream>
using namespace std;
void game(int *p)
{
    cout << endl << "Inside game() function : " << "\n";
    cout << "Value of *p = " << *p << "\n";
    *p = 50;
    cout << "Value of *p = " << *p << "\n";
    cout << "Exiting game() function." << "\n";
}
int main()
{
    int var = 60;
    cout << "Value of var inside main() function : " << var << "\n";   
    game(&var);   
    cout << "\n" << "Value of var inside main() function : " << var << "\n";
   
    return 0;
}
