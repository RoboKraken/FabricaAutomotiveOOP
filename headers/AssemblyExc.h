//
// Created by Robert on 09/01/2025.
//

#ifndef ASSEMBLYEXC_H
#define ASSEMBLYEXC_H
#include "Exception.h"
#include <string>

class AssemblyExc:Exception {
public:explicit AssemblyExc(const std::string& msg):Exception(":( Assembling error:"+msg){}
};
#endif //ASSEMBLYEXC_H
