#ifndef multisim_Battle_hpp
#define multisim_Battle_hpp

#include <map>
#include "BattleActor.hpp"

namespace multisim{
    class Battle{
        public:
            Battle(int battle_id);
            ~Battle();
            void step();

        protected:

        private:
            int m_battle_id;
            std::map<int, BattleActor> m_actors;
    };
}

#endif