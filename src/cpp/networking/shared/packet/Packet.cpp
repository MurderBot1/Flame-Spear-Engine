#include "networking/shared/packet/Packet.h"

namespace FSE::Networking::Packet {

    template<size_t SIZE>
    PacketBase<SIZE>::PacketBase(int packetID)
        : packetID(packetID), hash(0), data{} {}

    template<size_t SIZE>
    void PacketBase<SIZE>::constructHash() {
        hash = getHash();
    }

    template<size_t SIZE>
    uint64_t PacketBase<SIZE>::getHash() const {
        uint64_t h = 0x9E3779B185EBCA87ULL;

        for (size_t i = 0; i < SIZE; i++) {
            h ^= static_cast<unsigned char>(data[i]) * 0x9E3779B185EBCA87ULL;
            h = (h << 27) | (h >> 37);
            h *= 0x9E3779B185EBCA87ULL;
        }

        return h;
    }
} 