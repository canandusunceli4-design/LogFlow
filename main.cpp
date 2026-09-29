#include <iostream>
#include "FileLineSource.hpp"
#include "ConsoleSink.hpp"
#include "Pipeline.hpp"

int main(int argc, char* argv[]) {
    // Dosya yolunu bilgisayarýndaki tam konumla doðrudan sabitleyelim
    std::string filePath = "C:\\Users\\Tekno\\Desktop\\LogFlow\\test.log";

    try {
        std::cout << "Dosya aciliyor: " << filePath << std::endl;

        FileLineSource source(filePath);
        ConsoleSink sink;

        Pipeline pipeline(source, sink);
        pipeline.run();

    } catch (const std::exception& e) {
        std::cerr << "Hata: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}
