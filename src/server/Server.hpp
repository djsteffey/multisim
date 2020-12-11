#ifndef multisim_server_Server_hpp
#define multisim_server_Server_hpp

#include <map>
#include <memory>
#include "Services.hpp"
#include "BattlePool.hpp"


namespace multisim{
    namespace server{
        class Server : public Services{
            public:
                Server();
                ~Server();
                void run();
                void stop();

                // services
                unsigned int battle_create() override;
                void battle_add_player(unsigned int player_id)  override;
                void battle_start(unsigned int battle_id)  override;

            protected:

            private:
                void startup();
                void shutdown();

                bool m_running;
                std::map<unsigned int, unsigned int> m_battle_id_map;
                std::map<unsigned int, BattlePool> m_battle_pool_id_map;
        };
    }
}

#endif