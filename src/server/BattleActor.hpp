#ifndef multisim_BattleActor_hpp
#define multisim_BattleActor_hpp

#include <memory>
#include "BattleAction.hpp"

namespace multisim{
    class BattleActor{
        public:
            BattleActor(unsigned int actor_id, unsigned int graphics_id);
            ~BattleActor();
            void set_battle_action(std::unique_ptr<BattleAction> action);
            void set_tile_position(int tile_x, int tile_y);

        protected:

        private:
            int m_actor_id;
            int m_graphics_id;
            int m_tile_x;
            int m_tile_y;
            std::unique_ptr<BattleAction> m_battle_action;
    };
}

#endif