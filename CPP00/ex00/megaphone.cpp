#include <iostream>
#include <string>

std::string uppercase(std::string s)
{
    size_t  i;

    i = 0;
    while (i < s.length())
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - 32;
        i++;
    }
    return (s);
}

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    int  i = 1;
    while (i < argc)
    {
        std::string s = argv[i];
        std::string sUp = uppercase(s);
        std::cout << sUp;
        i++;
    }
    std::cout << std::endl;
    return (0);
}