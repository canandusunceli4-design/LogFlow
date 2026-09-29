#ifndef SOURCE_HPP
#define SOURCE_HPP

#include "Emitter.hpp"

template <typename O>
class Source {
public:
    virtual ~Source() = default;
    virtual void produce(Emitter<O>& out) = 0;
};

#endif
