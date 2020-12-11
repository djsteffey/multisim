#ifndef multisim_Account_hpp
#define multisim_Account_hpp

#include <string>

namespace multisim{
    class Account{
        public:
            Account(unsigned int id, std::string name);
            ~Account();

        protected:

        private:
            unsigned int m_id;
            std::string m_name;
            unsigned int m_battle_id;
            unsigned int m_actor_id;
    };
}

#endif