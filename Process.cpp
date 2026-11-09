//
// Created by Work on 11/4/2026.
//

#include "Process.h"

#include <ostream>

bool Process::operator<(const Process &lhsProcess) const
{
    return priority < lhsProcess.priority;
}

std::ostream& operator<<(std::ostream &os, const Process &process)
{

    os << process.id << " has priority: " << process.priority << std::endl;

    return os;
}
