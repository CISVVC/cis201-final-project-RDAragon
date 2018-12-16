/*
NAME: concordance.cpp
AUTHOR: Roger Aragon
EMAIL: aragonr87056@student.vvc.edu
DESCRIPTION: Source file for the concordance class
*/

#include "concordance.h"

Concordance::Concordance(std::string filename)
{
    m_filename = filename;
}

void Concordance::parse()
{
    std::ifstream file(m_filename.c_str());
    while(!file.eof())
    {
        std::string word = next_word(file);
        for (int i = 0; i < word.size(); i++)
        {
            if (word.compare(next_word[i].getWord()) == 0)
            {
            return i;
            }
        }
        std::cout << word << std::endl;
    }
}

bool Concordance::is_whitespace(char c)
{
    return (c ==' ' || c == '\n' || c == '\t');
}

void Concordance::eat_whitespace(std::ifstream& input)
{
    for(;;)
    {
        char c;
        input.get(c);
        if(input.eof())
            break;
        if (!is_whitespace(c))
        {
            input.putback(c);
            break;
        }
    }
}

std::string Concordance::next_word(std::ifstream& input)
{
    std::string word;
    for(;;)
    {
        char c;
        input.get(c);
        if(input.eof())
            break;
        if(!is_whitespace(c))
        {
            word += c;
        }
        else
        {
            eat_whitespace(input);
            break;
        }
    }
    return word;
}

int Concordance::find_word(std::string word)
{
    
}

void Concordance::print()
{

}


