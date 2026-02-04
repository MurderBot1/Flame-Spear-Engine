#ifndef Helpers_H
#define Helpers_H

namespace FSE::Helpers {
    namespace Screen {
        struct ConstantScreenSize {
            public:
                constexpr ConstantScreenSize(int x, int y) : x(x), y(y) {}
                constexpr int getX() const { return x; }
                constexpr int getY() const { return y; }
                constexpr int getTotal() const { return x * y; }
            private:
                const int x, y;
        };

        struct ScreenSize {
            public:
                ScreenSize(int x, int y) : x(x), y(y) {}
                ScreenSize(ConstantScreenSize constScreen) : x(constScreen.getX()), y(constScreen.getY()) {}
                int getX() { return x; }
                int getY() { return y; }
                int getTotal() { return x * y; }
                int setX(int newX) { x = newX; }
                int setY(int newY) { y = newY; }
                int set(int newX, int newY) {x = newX; y = newY; }
            private:
                int x, y;
        };
    } 
    
    
}

#endif