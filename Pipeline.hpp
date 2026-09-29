#ifndef PIPELINE_HPP
#define PIPELINE_HPP

#include "Source.hpp"
#include "Sink.hpp"
#include "Emitter.hpp"

class PipelineExecutor : public Emitter<std::string> {
private:
    Sink<std::string>& sink;

public:
    explicit PipelineExecutor(Sink<std::string>& s) : sink(s) {}

    void emit(const std::string& item) override {
        sink.consume(item);
    }
};

class Pipeline {
private:
    Source<std::string>& source;
    Sink<std::string>& sink;

public:
    Pipeline(Source<std::string>& src, Sink<std::string>& snk) 
        : source(src), sink(snk) {}

    void run() {
        PipelineExecutor executor(sink);
        source.produce(executor);
    }
};

#endif
