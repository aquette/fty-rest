/*
Copyright (C) 2015 Eaton

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License along
with this program; if not, write to the Free Software Foundation, Inc.,
51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
*/

/*! \file   cm-web.h
    \brief  Header file of functions for processing logic of rest api request 
    \author Karol Hrdina <KarolHrdina@eaton.com>
*/

#ifndef SRC_AGENTS_COMPUTATION_CM_WEB_H__
#define SRC_AGENTS_COMPUTATION_CM_WEB_H__

#include <map>
#include <string>

#include "ymsg.h"
#include "bios_agent.h"

namespace computation {
namespace web {

// Processing function that needs to adhere to "template" of std::function in std::map <...>  rules; in agent-cm.cc
void
process
(bios_agent_t *agent, ymsg_t *message_in, const char *sender, ymsg_t **message_out);

} // namespace computation::web
} // namespace computation

#endif // SRC_AGENTS_COMPUTATION_CM_WEB_H__
 
