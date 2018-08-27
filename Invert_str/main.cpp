#include <QCoreApplication>
#include <iostream>
#include <string>

using namespace std;

int main()
{
   string s1;
   string s2;
   cout << "Vvedite stroku" << endl;
   getline(cin, s1);
   unsigned int N = 0;
   N = s1.size();
   unsigned int i = N;
   for (i; i > 0; i-- )
   {
       s2 += s1[i];

   }
   s2 += s1[0];
    cout << s2;

    return 0;
}
