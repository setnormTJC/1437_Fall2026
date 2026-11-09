//
// Created by Work on 11/4/2026.
//

#ifndef INC_1437_FALL2026_PROCESS_H
#define INC_1437_FALL2026_PROCESS_H

#include<iostream>
#include <string>


class Process
{
public:
    std::string id;
    int priority = 0; //higher means more important (ex: 3 is more important than 1)

    ///@brief compares process by priority (not by id)
    bool operator < (const Process& lhsProcess) const;

    friend std::ostream& operator << (std::ostream& os, const Process& process);
};


#endif //INC_1437_FALL2026_PROCESS_H
