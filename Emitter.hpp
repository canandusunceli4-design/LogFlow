#ifndef EMITTER_HPP
#define EMITTER_HPP

template <typename T>
class Emitter {
public:
    virtual ~Emitter() = default;
    virtual void emit(const T& item) = 0;
};

#endif
