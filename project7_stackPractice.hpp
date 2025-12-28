#pragma once

#include <iostream>
#include <stack>

class clsString
{
    public:
    std::string                _Value = "";
    std::stack  <std::string>  _StackA;
    std::stack  <std::string>  _StackB;

    public:
    void setValue(std::string str)
    {
        _StackA.push(_Value);
        _Value = str;
    }

    std::string getValue(void)
    {
        return (_Value);
    }

    void Undo(void)
    {
        if (_StackA.empty())
            return ;

        _StackB.push(_StackA.top());
        _StackA.pop();
    }

    void Redo(void)
    {
        if (_StackB.empty())
            return ;

        _StackA.push(_StackB.top());
        _StackB.pop();
    }
};
