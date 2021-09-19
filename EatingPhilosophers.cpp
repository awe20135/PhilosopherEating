// EatingPhilosophers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>

DWORD WINAPI Run(LPVOID lpParam);

struct ThreadId2Number {
public:
    DWORD ThreadId;
    int number;
};

HANDLE THREADS[5];
HANDLE room = CreateSemaphoreA(NULL, 4, 4, NULL);
HANDLE console = CreateSemaphoreA(NULL, 1, 1, NULL);
HANDLE forks[5]{
    CreateSemaphoreA(NULL, 1, 1, NULL),
    CreateSemaphoreA(NULL, 1, 1, NULL),
    CreateSemaphoreA(NULL, 1, 1, NULL),
    CreateSemaphoreA(NULL, 1, 1, NULL),
    CreateSemaphoreA(NULL, 1, 1, NULL)
};
ThreadId2Number ids[5];



int main()
{
    for (int num = 0; num < 5; num++) {
        ids[num].number = num;
        THREADS[num] = CreateThread(NULL, 0, Run, NULL, 0, &(ids[num].ThreadId));
    }
    WaitForMultipleObjects(5, THREADS, true, INFINITE);
}



DWORD WINAPI Run(LPVOID lpParam) {
    int num = -1;

    for (int i = 0; i < 5; i++) {
        if (GetCurrentThreadId() == ids[i].ThreadId) {
            num = ids[i].number;
            break;
        }
    }

    if (num == -1)
        throw -1;

    int i = 0;
    while (i < 5) {
        WaitForSingleObject(room, INFINITE);
        WaitForSingleObject(forks[num], INFINITE);
        WaitForSingleObject(forks[(num + 1) % 5], INFINITE);
        WaitForSingleObject(console, INFINITE);

        std::cout << "Philosoph " << num + 1 << " eating. With forks: " << num + 1 << " and " << ((num + 1) % 5) + 1 << ". " << std::endl;

        ReleaseSemaphore(console, 1, NULL);
        ReleaseSemaphore(forks[(num + 1) % 5], 1, NULL);
        ReleaseSemaphore(forks[num], 1, NULL);
        ReleaseSemaphore(room, 1, NULL);

        i++;
    }
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
