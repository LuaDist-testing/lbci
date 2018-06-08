-- This file was automatically generated for the LuaDist project.

package="lbci"
version="20150629-1"

-- LuaDist source
source = {
  tag = "20150629-1",
  url = "git://github.com/LuaDist-testing/lbci.git"
}
-- Original source
-- source = {
--    url = "https://github.com/siffiejoe/lua-lbci/archive/v20150629.zip",
--    dir = "lua-lbci-20150629",
-- }

description = {
   summary = "A bytecode inspector library",
   detailed = [[
      A bytecode inspector library.
   ]],
   homepage = "http://www.tecgraf.puc-rio.br/~lhf/ftp/lua/#lbci",
   license = "Public domain, MIT"
}

dependencies = {
  -- Uses Lua internals. Includes support for Lua 5.1, 5.2, and 5.3.
   "lua >= 5.1, < 5.4"
}

build = {
   type = "builtin",
   modules = {
      bci = {
         sources = {
            "lbci_multi.c"
         },
         incdirs = {
            "dummy"
         }
      }
   }
}
