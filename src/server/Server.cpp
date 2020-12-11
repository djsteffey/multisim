#include "Server.hpp"
#include <chrono>
#include <thread>

namespace multisim{
    namespace server{
        Server::Server(){
            this->m_running = false;
        }

        Server::~Server(){
            // make sure we are stopped
            this->stop();
        }

        void Server::run(){
            // check if already running
            if (this->m_running){
                return;
            }

            // flag as running
            this->m_running = true;

            // startup
            this->startup();

            // keep on running
            while (this->m_running){
                // sleep
                std::this_thread::sleep_for(std::chrono::milliseconds(250));

                // each battle pool runs in own thread and updates independantly
            }

            // shutdown
            this->shutdown();
        }

        void Server::stop(){
            // check if running
            if (this->m_running == false){
                return;
            }

            // flag as not running
            this->m_running = false;
        }

        void Server::startup(){

        }

        void Server::shutdown(){

        }

        // services
        unsigned int Server::battle_create(){
            return 0;
        }

        void Server::battle_add_player(unsigned int player_id){

        }

        void Server::battle_start(unsigned int battle_id){

        }
    }
}
