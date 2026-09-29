#ifndef CONSOLE_SINK_HPP
#define CONSOLE_SINK_HPP

#include "Sink.hpp"
#include <iostream>
#include <string>

class ConsoleSink : public Sink<std::string> {
public:
    void consume(const std::string& item) override {
        std::cout << item << std::endl;
    }
};

#endif
