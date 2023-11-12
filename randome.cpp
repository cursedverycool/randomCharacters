#include <ctime>
#include <iostream>
#include <cstdlib>


static const char alphanum[] =
". .. ... .... ....."
" . . . . ....    ..  "
"1234567890"
"QWERTYUIOPASDFGHJKLZXCVBNM"
"qwertyuiopasdfghjklzxcvbnm"
",.é;`<.^o"
"\n \n\n   ";
int size = sizeof(alphanum) - 1;

int main()
{
    std::cout << "color a\n";
    int length = 500;
   while(true){ 
    srand(time(0));
    for (int i = 0; i < length; i++)
     std::cout << alphanum[rand() % ::size];}
    std::cin.get();
    return 0;
}
