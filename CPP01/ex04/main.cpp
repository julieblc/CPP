#include <string>
#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cer << "Error: number of arguments" << std::endl;
        return (1);
    }

    std::ifstream in(argv[1]);
    if (!in.is_open())
    {
        std::cer << "Error: file not found: " << argv[1] << std::endl;
        return (1);
    }
    std::string line;
    std::string content;
    while (std::getline(in, line))
    {
        content += line;
        if (!in.eof())
            content += '\n';
    }

    
    return (0);
}