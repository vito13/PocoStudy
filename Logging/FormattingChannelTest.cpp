#include <Poco/ConsoleChannel.h>
#include <Poco/FormattingChannel.h>
#include <Poco/PatternFormatter.h>
#include "Poco/Logger.h"
#include "Poco/AutoPtr.h"


using Poco::ConsoleChannel;
using Poco::FormattingChannel;
using Poco::PatternFormatter;
using Poco::Logger;
using Poco::AutoPtr;

int main(int argc, char **argv) {
    AutoPtr<ConsoleChannel> pCons(new ConsoleChannel);
    AutoPtr<PatternFormatter> pPF(new PatternFormatter);
    pPF->setProperty("pattern", "%Y-%m-%d %H:%M:%S %s: %t");
    AutoPtr<FormattingChannel> pFC(new FormattingChannel(pPF, pCons));

    Logger::root().setChannel(pFC);

    Logger &logger = Logger::get("TestLogger");
    logger.information("This is an informational message");
    return 0;
}