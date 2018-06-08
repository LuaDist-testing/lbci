#define LUA_CORE
#include "lua.h"
#include "lauxlib.h"

#if LUA_VERSION_NUM == 502

#include "lua5.2/llimits.h"
#include "lua5.2/lobject.h"
#include "lua5.2/ltm.h"
#include "lua5.2/lmem.h"
#include "lua5.2/lzio.h"
#include "lua5.2/lstate.h"
#include "lua5.2/ldebug.h"
#define luaP_opnames lbci_opnames
#define luaP_opmodes lbci_opmodes
#include "lua5.2/lopcodes.h"
#include "lua5.2/lopcodes.c"
#undef luaP_opnames
#undef luaP_opmodes
#undef LUA_CORE
#include "lbci-5.2.c"

#elif LUA_VERSION_NUM == 501

#include "lua5.1/llimits.h"
#include "lua5.1/lobject.h"
#include "lua5.1/ltm.h"
#include "lua5.1/lmem.h"
#include "lua5.1/lzio.h"
#include "lua5.1/lstate.h"
#include "lua5.1/ldebug.h"
#define luaP_opnames lbci_opnames
#define luaP_opmodes lbci_opmodes
#include "lua5.1/lopcodes.h"
#include "lua5.1/lopcodes.c"
#undef luaP_opnames
#undef luaP_opmodes
#undef LUA_CORE
#include "lbci-5.1.c"

#else

#error unsupported Lua version for lbci

#endif

