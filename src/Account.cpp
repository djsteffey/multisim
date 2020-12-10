#include "Account.hpp"

namespace multisim{
    Account::Account(unsigned int id, std::string name){
        this->m_id = id;
        this->m_name = name;
        this->m_battle_id = 0;
        this->m_actor_id = 0;
    }

    Account::~Account(){

    }
}