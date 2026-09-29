#ifndef STAGE_HPP
#define STAGE_HPP

#include "Emitter.hpp"

template <typename I, typename O>
class Stage {
public:
    virtual ~Stage() = default;
    virtual void process(const I& input, Emitter<O>& out) = 0;
    virtual void open() {}  
    virtual void close() {} 
};

#endif
