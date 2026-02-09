#include "networking/shared/packet/PacketBuilder.h"

namespace FSE::Networking::Packet {

    template<typename T>
    PacketBuilder<T>::PacketBuilder(int ID)
        : packet(ID), cursor(0) {}

    template<typename T>
    void PacketBuilder<T>::ensureSpace(size_t bytes) {
        if (cursor + bytes > packet.data.size()) {
            throw std::runtime_error("PacketBuilder overflow");
        }
    }

    template<typename T>
    void PacketBuilder<T>::writeByte(unsigned char b) {
        ensureSpace(1);
        packet.data[cursor++] = static_cast<char>(b);
    }

    template<typename T>
    void PacketBuilder<T>::writeBytes(const unsigned char* src, size_t count) {
        ensureSpace(count);
        for (size_t i = 0; i < count; ++i)
            packet.data[cursor++] = static_cast<char>(src[i]);
    }

    template<typename T>
    template<typename U>
    void PacketBuilder<T>::writeBigEndian(U value) {
        static_assert(std::is_integral<U>::value, "writeBigEndian requires integral type");
        constexpr size_t N = sizeof(U);
        ensureSpace(N);

        for (int i = N - 1; i >= 0; --i)
            writeByte((value >> (i * 8)) & 0xFF);
    }

    template<typename T>
    PacketBuilder<T>& PacketBuilder<T>::withBool(bool var) {
        writeByte(var ? 1 : 0);
        return *this;
    }

    template<typename T>
    PacketBuilder<T>& PacketBuilder<T>::withChar(char var) {
        writeByte(static_cast<unsigned char>(var));
        return *this;
    }

    template<typename T>
    PacketBuilder<T>& PacketBuilder<T>::withInt(int32_t var) {
        writeBigEndian(var);
        return *this;
    }

    template<typename T>
    PacketBuilder<T>& PacketBuilder<T>::withFloat(float var) {
        uint32_t bits;
        std::memcpy(&bits, &var, sizeof(float));
        writeBigEndian(bits);
        return *this;
    }

    template<typename T>
    PacketBuilder<T>& PacketBuilder<T>::withDouble(double var) {
        uint64_t bits;
        std::memcpy(&bits, &var, sizeof(double));
        writeBigEndian(bits);
        return *this;
    }

    template<typename T>
    PacketBuilder<T>& PacketBuilder<T>::withString(const std::string& var) {
        withInt(static_cast<int32_t>(var.size()));
        writeBytes(reinterpret_cast<const unsigned char*>(var.data()), var.size());
        return *this;
    }

    template<typename T>
    PacketBuilder<T>& PacketBuilder<T>::withRawBytes(const std::vector<unsigned char>& var) {
        writeBytes(var.data(), var.size());
        return *this;
    }

    template<typename T>
    T PacketBuilder<T>::construct() {
        packet.constructHash();
        return packet;
    }

}
