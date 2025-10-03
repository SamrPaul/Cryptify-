# Your Parallel Encryption and Decryption

## Overview

This project demonstrates the implementation of encryption and decryption mechanisms using Queue using FIFO in C++.


### 1. `add/childProcessing`

**Description:** This branch showcases the use of parallel multiprocessing by creating child processes to handle encryption and decryption tasks. It utilizes the `fork()` system call to spawn child processes, enabling concurrent execution of tasks.

**Key Features:**

- **Process Management:** Implements process creation and management using `fork()`.
- **Task Queue:** Manages encryption and decryption tasks using a queue structure.
- **Task Execution:** Child processes execute tasks independently, allowing parallel processing.

### 2. `add/multithreading`

**Description:** This branch focuses on multithreading combined with shared memory to perform encryption and decryption. It employs POSIX threads (`pthread`) and utilizes shared memory segments for efficient inter-thread communication.

**Key Features:**

- **Multithreading:** Implements concurrent execution using POSIX threads.
- **Shared Memory:** Utilizes shared memory for communication between threads.
- **Semaphores:** Employs semaphores to manage synchronization and ensure data consistency.

## Getting Started

To explore the implementations in each branch:

   ```bash
   git clone https://github.com/SamrPaul/Cryptify-
   cd Cryptify
   git checkout <branch>
   # Now make a virtual env and activate
  
   make
   ./Cryptify
   test
   ENCRYPT # after giving directory name, give ENCRYPT or DECRYPT to tell what to do
   ```


<br>
<br>
<br>


<img width="665" height="179" alt="output1" src="https://github.com/user-attachments/assets/055cfe3d-2dab-49df-9104-31a74d85b1aa" />

<br>
<br>
<br>


<img width="665" height="255" alt="output2" src="https://github.com/user-attachments/assets/caa15e14-08b9-4864-8dad-50acf250ef49" />



