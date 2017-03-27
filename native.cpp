#include <bits/stdc++.h>

using namespace std;

int main(){
	
        unsigned int length = 0;

        for (int i = 0; i < 4; i++)
        {
            unsigned int read_char = getchar();
            length = length | (read_char << i*8);
        }

        std::string men = "";
        for (int i = 0; i < length; i++)
        {
            men += getchar();
        }
        
        std::ofstream outfile("kappa.txt");
        outfile << men << std::flush;
        outfile.close();

		std::string message = "{\"text\":\"Nao! Sou o Jo Soares! Sua ...\"}";
        unsigned int len = message.length();

        std::cout   << char(len>>0)
                    << char(len>>8)
                    << char(len>>16)
                    << char(len>>24);

        std::cout << message << std::flush;
    return 0;
}
