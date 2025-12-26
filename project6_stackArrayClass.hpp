#pragma once

#include <iostream>
#include "project5_queueArrayClass.hpp"

template <class data> class clsStack : public clsQueue <data>
{
    public:
    void pop(void)
    {
        clsQueue <data>::_MyList.deleteLastItem();
    }

    data top(void)
    {
        return (clsQueue <data>::back());
    }
};
