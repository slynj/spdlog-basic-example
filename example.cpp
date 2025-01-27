#include <spdlog/spdlog.h>
#include <spdlog/sinks/basic_file_sink.h>

int main() {
    spdlog::info("Hello, spdlog!");

    spdlog::debug("This is a debug message"); 
    spdlog::warn("Warning: Something might be wrong");
    spdlog::error("Error: Something went wrong!");
    spdlog::critical("Critical issue encountered!");

    auto file_logger = spdlog::basic_logger_mt("file_logger", "logs/example.log");
    file_logger->info("This message is logged to a file!");

    spdlog::set_pattern("[%Y-%m-%d %H:%M:%S] [%^%l%$] %v");
    spdlog::info("This is a log message with a custom format!");

    spdlog::set_level(spdlog::level::debug);
    spdlog::debug("Debug messages are now visible!");

    return 0;
}