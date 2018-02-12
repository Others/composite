#include "gen/common_types.h"
#include "gen/osapi.h"

#include "cFE_util.h"

int32 OS_ModuleTableInit(void)
{
    return OS_SUCCESS;
}

int32 OS_ModuleLoad(uint32 *module_id, const char *module_name, const char *filename)
{
    return OS_SUCCESS;
}

int32 OS_ModuleUnload(uint32 module_id)
{
    return OS_SUCCESS;
}

int32 OS_SymbolLookup(cpuaddr *symbol_address, const char *symbol_name)
{
    return OS_ERR_NOT_IMPLEMENTED;
}

int32 OS_ModuleInfo(uint32 module_id, OS_module_prop_t *module_info)
{
    return OS_ERR_NOT_IMPLEMENTED;
}

int32 OS_SymbolTableDump(const char *filename, uint32 size_limit)
{
    /* Not needed. */
    return OS_ERR_NOT_IMPLEMENTED;
}
