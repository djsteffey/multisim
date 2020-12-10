#include "BattleActor.hpp"

namespace multisim{
    BattleActor::BattleActor(int actor_id, int graphics_id){
        this->m_actor_id = actor_id;
        this->m_graphics_id = graphics_id;
        this->m_tile_x = -1;
        this->m_tile_y = -1;
    }

    BattleActor::~BattleActor(){

    }

    void BattleActor::set_battle_action(std::unique_ptr<BattleAction> action){
        this->m_battle_action = std::move(action);
    }

    void BattleActor::set_tile_position(int tile_x, int tile_y){
        this->m_tile_x = tile_x;
        this->m_tile_y = tile_y;
    }
}