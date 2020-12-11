#ifndef multisim_server_BattlePool_hpp
#define multisim_server_BattlePool_hpp

#include <map>
#include <thread>
#include "Battle.hpp"

namespace multisim{
    namespace server{
        class BattlePool{
            public:
                BattlePool();
                ~BattlePool();
                void run_async();
                void stop();

            protected:

            private:
                void thread_function();
                
                bool m_running;
                std::thread m_thread;
                std::map<unsigned int, Battle> m_battles;
        };
    }
}
#endif