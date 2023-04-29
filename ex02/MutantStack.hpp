#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
    MutantStack<T>() {}
    MutantStack<T>(const MutantStack<T> &mutantStack)
    {
        *this = mutantStack;
    }

    ~MutantStack<T>() {}

    MutantStack<T> &operator=(const MutantStack<T> &mutantStack)
    {
        this->c = mutantStack.c;
        return *this;
    }

    typedef typename MutantStack<T>::container_type::iterator iterator;
    iterator begin()
    {
        return this->c.begin();
    }
    iterator end()
    {
        return this->c.end();
    }
};

#endif
