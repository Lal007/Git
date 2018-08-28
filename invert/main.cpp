#include <iostream>
#include <string>
int main()
{
   std::string s1, s2;
   std::cout << "Vvedite stroku" << std::endl;
   std::getline(std::cin, s1);
   for (int i = s1.size() - 1; i >= 0; i--)
        s2 += s1[i];
   std::cout << s2;
   return 0;
}
