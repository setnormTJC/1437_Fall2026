

#include<algorithm> //gives access to std::sort (among many others)
#include<filesystem>
#include<iostream>
#include<memory>
#include<queue> //for priority_queue
#include<string>

#include "Animal.h"
#include "Box.h"
#include "ChaseExplorations.h"
#include "CustomVector.h"
#include "demos.h"
#include "Parent.h"
#include "Person.h"
#include "Process.h"
#include "SandwichShop.h"
#include "Shape.h"


void printPeople(const std::vector<Person>& people)
{
    for (int i = 0; i < people.size(); ++i)
    {
        std::cout << people[i] << std::endl;
    }

}

void demoSortingPeople()
{
    std::vector<int> nums =
    {
        8, 6, 7, 5, 3, 0, 9 //what criterion is this list sorted by?
    };

    //std::sort(nums.begin(), nums.end());

    std::vector<Person> people =
    {
        {"Bob", 2}, //Bob is 2 years old
        // {"Bobb", 2},
        {"Alice", 1},//Alice is 1 year old, etc.
        {"Darth", 4},
        {"Carol", 3}
    };

    //std::cout << "The address of people at index 0 is:" << &people[0] << std::endl;
    //people[0].showThis();

    std::sort(people.begin(), people.end());

    printPeople(people);
}


int main()
{
    // demoSortingPeople();

    //move on to priority queues:

    std::vector<int> nums;
    
    std::priority_queue<Process> processes;

    processes.push({"A", 1}); //requires overloading <

    // std::priority_queue<int> priorityQueue;
    //
    // priorityQueue.push(2);
    // priorityQueue.push(1);
    // priorityQueue.push(3);
    //
    // std::cout << "Top of priority queue contains: " << priorityQueue.top() << std::endl;
    //
    // priorityQueue.pop();
    //
    // std::cout << "Top after popping once: " << priorityQueue.top() << std::endl;

    return 0;
}


