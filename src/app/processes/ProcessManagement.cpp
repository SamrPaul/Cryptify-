#include <iostream.h>
#include "ProcessManagement.hpp"
#include <unistd.h>
#include <cstring>
#include <sys/wait.h>
#include "../encryptDecrypt/Cryption.hpp"

ProcessManagement::ProcessManagement() {}
using namespace std;
bool ProcessManagement::submitToQueue(unique_ptr<Task> task) {
    taskQueue.push(move(task));
    
    return true;
}

void ProcessManagement::executeTasks() {
    while (!taskQueue.empty()) {
        std::unique_ptr<Task> taskToExecute = std::move(taskQueue.front());
        taskQueue.pop();
        std::cout << "Executing task: " << taskToExecute->toString() << std::endl;
        // Add a breakpoint here in VS Code
        executeCryption(taskToExecute->toString());
    }
}