#pragma once

#include <iostream>
#include "project2_queueClass.hpp"

template <class data> class clsStack : public clsQueue <data>
{
    public:
    void pop(void)
    {
        clsQueue <data>::_MyList.deleteLastNode();
    }

    data top(void)
    {
        return (clsQueue <data>::back());
    }
};
