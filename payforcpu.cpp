#include <eosiolib/eosio.hpp>

using namespace eosio;

class payforcpu : public contract {
    using contract::contract;

    public:
        payforcpu( account_name self ) :
            contract(self)
            {}

        // @abi action
        void payforcpu( ){

        }

};

EOSIO_ABI( payforcpu, (payforcpu))
