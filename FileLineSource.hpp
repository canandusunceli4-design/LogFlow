#ifndef FILE_LINE_SOURCE_HPP
#define FILE_LINE_SOURCE_HPP

#include "Source.hpp"
#include <string>
#include <fstream>
#include <iostream>
#include <stdexcept>

class FileLineSource : public Source<std::string> {
private:
    std::string filePath;

public:
    explicit FileLineSource(std::string path) : filePath(std::move(path)) {}

    void produce(Emitter<std::string>& out) override {
        std::ifstream file(filePath);
        if (!file.is_open()) {
            throw std::runtime_error("Dosya acilamadi: " + filePath);
        }

        std::string line;
        while (std::getline(file, line)) {
            out.emit(line);
        }
    }
};

#endif
