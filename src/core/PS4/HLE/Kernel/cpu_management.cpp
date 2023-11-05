#include "cpu_management.h"
#include "Util/config.h"
#include "common/log.h"
#include <core/PS4/HLE/Libs.h>

namespace HLE::Libs::LibKernel::CPUManagement {
int PS4_SYSV_ABI sceKernelIsNeoMode() {
    PRINT_FUNCTION_NAME();
    bool isNeo = Config::isNeoMode();
    return isNeo ? 1 : 0;
}

};  // namespace HLE::Libs::LibKernel::CPUManagement
