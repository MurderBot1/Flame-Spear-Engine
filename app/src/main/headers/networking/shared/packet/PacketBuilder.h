#ifndef PacketBuilder_H
#define PacketBuilder_H

#include "networking/shared/packet/Packet.h"

#include <type_traits>
#include <string>

namespace FSE::Networking::Packet {
    template<typename T>
    class PacketBuilder {
        static_assert(std::is_base_of<PacketBaseTag, T>::value,
                  "Built type must inherit from Base");
        public:
            PacketBuilder(int ID);
        public:
            void withBool(bool var);
            void withChar(char var);
            void withDouble(double var);
            void withFloat(float var);
            void withInt(int var);
            void withString(std::string var);
            T construct();
        private:
            T packet;
            size_t sizeRemainingInBytes;
            size_t totalSize;
    };
}

#endif