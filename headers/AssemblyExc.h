//
// Created by Robert on 09/01/2025.
//

#ifndef ASSEMBLYEXC_H
#define ASSEMBLYEXC_H
#include "Exception.h"
#include <string>
/**
 * @class AssemblyExc
 * @brief This class exists to provide Error messages for the assembly line
 *
 *
 */
class AssemblyExc:public Exception {
public:explicit AssemblyExc(const std::string& msg):Exception(" Assembling error:"+msg){}
};
#endif //ASSEMBLYEXC_H
