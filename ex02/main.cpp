
#include <iostream>

#include "MutantStack.hpp"

int main()
{
    {
        MutantStack<int> mstack;

        mstack.push(5);
        mstack.push(17);

        std::cout << "After adding 5 and 17, the top of the stack is: " << mstack.top() << std::endl;

        mstack.pop();

        std::cout << "After popping out one element, the size now is: " << mstack.size() << std::endl;

        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        //[...]
        mstack.push(0);

        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();

        std::cout << "After adding 3, 5, 737 and 0, the iterated elements are: " << std::endl;

        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        std::stack<int> s(mstack);
    }

    {
        MutantStack<int> stack;

        std::cout << "Testing push() and top(): " << std::endl;
        stack.push(1);
        assert(stack.top() == 1);
        stack.push(2);
        assert(stack.top() == 2);
        stack.push(3);
        assert(stack.top() == 3);

        std::cout << "Testing pop(): " << std::endl;
        stack.pop();
        assert(stack.top() == 2);

        std::cout << "Testing size(): " << std::endl;
        assert(stack.size() == 2);

        std::cout << "Testing empty(): " << std::endl;
        assert(!stack.empty());

        std::cout << "Testing iteration: " << std::endl;
        for (MutantStack<int>::iterator it = stack.begin(); it != stack.end(); ++it)
        {
            std::cout << *it << std::endl;
        }
    }

    return 0;
}
