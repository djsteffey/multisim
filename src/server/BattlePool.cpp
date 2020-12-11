#include "BattlePool.hpp"

namespace multisim{
    namespace server{
        BattlePool::BattlePool(){
            // flag as not running
            this->m_running = false;
        }

        BattlePool::~BattlePool(){
            // ensure we are stopped
            this->stop();
        }

        void BattlePool::run_async(){
            // check if already running
            if (this->m_running){
                return;
            }

            // flag as running
            this->m_running = true;

            // start thread
            this->m_thread = std::thread(&BattlePool::thread_function, this);
        }

        void BattlePool::stop(){
            // check if running
            if (this->m_running == false){
                return;
            }

            // flag as not running
            this->m_running = false;

            // wait for the thread
            if (this->m_thread.joinable()){
                this->m_thread.join();
            }

            // clear battles
            this->m_battles.clear();
        }

        void BattlePool::thread_function(){
            // init

            // loop while running
            while (this->m_running){
                // process battles
                for (auto& kvp : this->m_battles){
                    Battle& battle = kvp.second;
                    battle.update();
                }
            }

            // destroy
            this->m_battles.clear();
        }
    }
}