//
// Created by Robert on 09/01/2025.
//

#ifndef ASSEMBLYEXC_H
#define ASSEMBLYEXC_H
#include <exception>
#include <string>

class AssemblyExc:public std::exception {
public:explicit AssemblyExc(const std::string& message):Exception(":( Assembling error:"+msg){}
};
#endif //ASSEMBLYEXC_H
