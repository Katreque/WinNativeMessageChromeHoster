#include <bits/stdc++.h>

using namespace std;

int main(){
	
        unsigned int length = 0;

        for (int i = 0; i < 4; i++)
        {
            unsigned int read_char = getchar();
            length = length | (read_char << i*8);
        }

        std::string msg = "";
        for (int i = 0; i < length; i++)
        {
            msg += getchar();
        }
        
        std::ofstream out("kappa.txt");
        out << msg;

		std::string message = "{\"text\":\"Não. É o Pele!\"}";
        unsigned int len = message.length();

        len = length;
        std::cout   << char(len>>0)
                    << char(len>>8)
                    << char(len>>16)
                    << char(len>>24);

        std::cout << msg << std::flush;
    return 0;
}
