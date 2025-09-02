// Malika Xasanboyeva 220106
// 2.09.2025  | Tuesday 14:00
// Async


// 1.
#include <iostream>
#include <future>
#include <numeric> // For std::accumulate

long long calculateSum() {
    long long sum = 0;
    for (long long i = 1; i <= 1000000000; ++i) {
        sum += i;
    }
    return sum;
}

int main() {
    std::cout << "Main thread: Starting calculation..." << std::endl;

    // std::async launches the task, returning a std::future
    std::future<long long> sumFuture = std::async(std::launch::async, calculateSum);

    std::cout << "Main thread: Waiting for result..." << std::endl;

    // .get() blocks until the future has a value and returns it
    long long result = sumFuture.get();

    std::cout << "Main thread: The calculated sum is: " << result << std::endl;

    return 0;
}





/*

2.
It prevents blocking the main thread while waiting for slow tasks (like network 
or disk). It keeps apps responsive and efficient.


3. 
Parallel → multiple tasks run at the same time on different cores.

Concurrent → multiple tasks are in progress, but not necessarily at the same 
instant (they can share one core via scheduling).

4.
A Future represents a placeholder for a value that will be available later.

A Promise is the producer that sets that value.

In Java, Future/CompletableFuture manages async results.

In C++, std::future and std::promise do the same, letting you get results or handle errors from async tasks.

*/
