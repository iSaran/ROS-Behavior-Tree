#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H

#include <string>
#include <stdexcept>

namespace BT
{
/// Exception class
class BehaviorTreeException : public std::exception
{
private:
    const char* Message;
public:
    explicit BehaviorTreeException(const std::string Message);
    const char* what();
};
}

#endif  // EXCEPTIONS_H
