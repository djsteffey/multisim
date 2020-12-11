#include <cstdlib>

namespace multisim{
    namespace common{
        unsigned int generate_random_id(){
            unsigned int r = std::rand();
            return r;
        }
    }
}