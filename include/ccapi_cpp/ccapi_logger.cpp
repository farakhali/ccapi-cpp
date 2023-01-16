#include "ccapi_logger.h"

#include <iostream>

class MyLogger final : public ccapi::Logger
{
 public:
   void logMessage(const std::string &severity, const std::string &threadId, const std::string &timeISO,
                   const std::string &fileName, const std::string &lineNumber, const std::string &message) override
   {
      // std::cout << "Severity: " << severity << " | " << fileName << ": "
      //           << lineNumber << " | Message: " << message << std::endl;

      std::cout << timeISO << " : " << fileName << ": " << lineNumber << " : " << message << std::endl;
   }
};
MyLogger       myLogger;
ccapi::Logger *ccapi::Logger::logger = &myLogger;

// ccapi::Logger *ccapi::Logger::logger = nullptr;
