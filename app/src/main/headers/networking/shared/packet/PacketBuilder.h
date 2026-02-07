#ifndef PacketBuilder_H
#define PacketBuilder_H

#include "networking/shared/packet/Packet.h"

#include <type_traits>
#include <string>
#include <vector>
#include <cstring>
#include <stdexcept>

namespace FSE::Networking::Packet {

    template<typename T>
    class PacketBuilder {
        static_assert(std::is_base_of<PacketBaseTag, T>::value,
                      "PacketBuilder<T> requires T to inherit from PacketBaseTag");

    public:
        explicit PacketBuilder(int ID);

        PacketBuilder& withBool(bool var);
        PacketBuilder& withChar(char var);
        PacketBuilder& withInt(int32_t var);
        PacketBuilder& withFloat(float var);
        PacketBuilder& withDouble(double var);
        PacketBuilder& withString(const std::string& var);
        PacketBuilder& withRawBytes(const std::vector<unsigned char>& var);

        T construct();

    private:
        T packet;
        size_t cursor;

        void ensureSpace(size_t bytes);
        void writeByte(unsigned char b);
        void writeBytes(const unsigned char* src, size_t count);

        template<typename U>
        void writeBigEndian(U value);
    };

} 

#endif