/*
NAME: word.cpp
AUTHOR: Roger Aragon
EMAIL: aragonr87056@student.vvc.edu
DESCRIPTION: source file for the word class
*/

#include  "word.h"

Word::Word(std::string word)
{
    m_word = word;
    m_count = 1;
}

void Word::add_count(int count)
{
    m_count++;
}

void Word::add_line(int line)
{
    m_line.push_back(line);
}
