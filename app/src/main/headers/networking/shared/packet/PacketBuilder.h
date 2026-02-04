#ifndef PacketBuilder_H
#define PacketBuilder_H

#include "networking/shared/packet/Packet.h"

#include <type_traits>

namespace FSE::Networking::Packet {
    template<typename T>
    class PacketBuilder {
        static_assert(std::is_base_of<PacketBaseTag, T>::value,
                  "Built type must inherit from Base");
        public:
            PacketBuilder(int ID);
        private:
            T packet;
            int sizeRemaining;
    };
}

#endif