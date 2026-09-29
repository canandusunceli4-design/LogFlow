#ifndef SINK_HPP
#define SINK_HPP

template <typename I>
class Sink {
public:
    virtual ~Sink() = default;
    virtual void consume(const I& item) = 0;
};

#endif
