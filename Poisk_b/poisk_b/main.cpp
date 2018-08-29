#include <iostream>
#include <string>
#include <cctype>

using namespace std;
int main()
{
   string s1;
   bool word_new = true;
   int counter_b = 0;
   cout << "Vvedite stroku" << endl;
   getline(cin, s1);

   for (int i = 0; i  < int (s1.size()); i++)
   {
        if ((s1[i] == 'b') && word_new)
        {
          counter_b++;
          word_new = false;
        }
        else if (s1[i] == ' ')
        {
           word_new = true;
        }
    }

   cout << counter_b;
   return 0;
}
