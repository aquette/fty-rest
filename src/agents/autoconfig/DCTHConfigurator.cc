/* 
Copyright (C) 2014 - 2015 Eaton
 
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

/*!
 \file   DCTHConfigurator.cc
 \brief  Configuration of composite-metrics
 \author Michal Vyskocil <michalvyskocil@eaton.com>
*/

#include "log.h"
#include "asset_types.h"

#include "bits.h"
#include "DCTHConfigurator.h"

bool DCTHConfigurator::v_configure (const std::string& name, const AutoConfigurationInfo& info, mlm_client_t *client)
{
    switch (info.operation) {
        case persist::asset_operation::INSERT:
        case persist::asset_operation::UPDATE:
        case persist::asset_operation::DELETE:
            {
                systemctl ("dc_th", "restart");
            }
        case persist::asset_operation::RETIRE:
        {
            break;
        }
        default:
        {
            log_warning ("todo");
            break;
        }
    }
    return true;

}
