//
// Created by Robert on 08/01/2025.
//

#ifndef EXCEPTION_H
#define EXCEPTION_H
#include <exception>
#include <string>

class Exception: public std::exception
{
public:
    explicit Exception(const std::string& message)
        : msgerr(message) {}

    virtual ~Exception() noexcept{}

    virtual const char* what() const noexcept {
        return msgerr.c_str();
    }

protected:
    std::string msgerr;
};
#endif //EXCEPTION_H
