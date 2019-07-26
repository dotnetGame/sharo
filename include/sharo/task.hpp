#ifndef SHARO_TASK_H_
#define SHARO_TASK_H_

namespace sharo
{
    enum task_state_t {
        executing,
        ready,
        finished
    };
    
    class task
    {
    public:

    private:
        virtual task* run() = 0;
    };
}

#endif