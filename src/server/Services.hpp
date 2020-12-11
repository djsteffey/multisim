#ifndef multisim_server_Services_hpp
#define multisim_server_Services_hpp

namespace multisim{
    namespace server{
        class Services{
            public:
                virtual unsigned int battle_create() = 0;
                virtual void battle_add_player(unsigned int player_id) = 0;
                virtual void battle_start(unsigned int battle_id) = 0;

            protected:
                Services(){ }
                ~Services(){ }

            private:
                
        };
    }
}
#endif