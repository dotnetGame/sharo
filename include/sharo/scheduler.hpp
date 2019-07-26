#ifndef SHARO_SCHEDULER_H_
#define SHARO_SCHEDULER_H_

#include <functional>
#include <thread>
#include <atomic>
#include <vector>
#include <memory>
#include <exception>
#include <future>
#include <mutex>

#include "task.hpp"

namespace sharo
{
    class scheduler
    {
    public:
        scheduler()
            : _pool(std::thread::hardware_concurrency())
        {
        }

        scheduler(int thread_num)
            : _pool(thread_num)
        {
        }
    private:
        std::vector<std::thread> _pool;
        std::vector<task> _task_list;
    };
}

#endif