/*  =========================================================================
    fty_rest - generated layer of public API

    Copyright (c) the Authors

################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
    =========================================================================
*/

#ifndef FTY_REST_LIBRARY_H_INCLUDED
#define FTY_REST_LIBRARY_H_INCLUDED

//  Set up environment for the application

//  External dependencies
#include <czmq.h>
#include <malamute.h>
#include <cxxtools/allocator.h>
#if defined (HAVE_TNTNET)
#include <tntnet.h>
#endif
#include <ftyproto.h>

//  FTY_REST version macros for compile-time API detection
#define FTY_REST_VERSION_MAJOR 1
#define FTY_REST_VERSION_MINOR 0
#define FTY_REST_VERSION_PATCH 0

#define FTY_REST_MAKE_VERSION(major, minor, patch) \
    ((major) * 10000 + (minor) * 100 + (patch))
#define FTY_REST_VERSION \
    FTY_REST_MAKE_VERSION(FTY_REST_VERSION_MAJOR, FTY_REST_VERSION_MINOR, FTY_REST_VERSION_PATCH)

#if defined (__WINDOWS__)
#   if defined FTY_REST_STATIC
#       define FTY_REST_EXPORT
#   elif defined FTY_REST_INTERNAL_BUILD
#       if defined DLL_EXPORT
#           define FTY_REST_EXPORT __declspec(dllexport)
#       else
#           define FTY_REST_EXPORT
#       endif
#   elif defined FTY_REST_EXPORTS
#       define FTY_REST_EXPORT __declspec(dllexport)
#   else
#       define FTY_REST_EXPORT __declspec(dllimport)
#   endif
#   define FTY_REST_PRIVATE
#elif defined (__CYGWIN__)
#   define FTY_REST_EXPORT
#   define FTY_REST_PRIVATE
#else
#   define FTY_REST_EXPORT
#   if (defined __GNUC__ && __GNUC__ >= 4) || defined __INTEL_COMPILER
#       define FTY_REST_PRIVATE __attribute__ ((visibility ("hidden")))
#   else
#       define FTY_REST_PRIVATE
#   endif
#endif

//  Project has no stable classes, so we build the draft API
#undef  FTY_REST_BUILD_DRAFT_API
#define FTY_REST_BUILD_DRAFT_API

//  Opaque class structures to allow forward references
//  These classes are stable or legacy and built in all releases
//  Draft classes are by default not built in stable releases
#ifdef FTY_REST_BUILD_DRAFT_API
typedef struct _db/topology2_t db/topology2_t;
#define DB/TOPOLOGY2_T_DEFINED
typedef struct _git_details_override_t git_details_override_t;
#define GIT_DETAILS_OVERRIDE_T_DEFINED
typedef struct _shared/asset_types_t shared/asset_types_t;
#define SHARED/ASSET_TYPES_T_DEFINED
typedef struct _shared/augtool_t shared/augtool_t;
#define SHARED/AUGTOOL_T_DEFINED
typedef struct _shared/cidr_t shared/cidr_t;
#define SHARED/CIDR_T_DEFINED
typedef struct _shared/configure_inform_t shared/configure_inform_t;
#define SHARED/CONFIGURE_INFORM_T_DEFINED
typedef struct _shared/csv_t shared/csv_t;
#define SHARED/CSV_T_DEFINED
typedef struct _shared/data_t shared/data_t;
#define SHARED/DATA_T_DEFINED
typedef struct _shared/dbpath_t shared/dbpath_t;
#define SHARED/DBPATH_T_DEFINED
typedef struct _shared/filesystem_t shared/filesystem_t;
#define SHARED/FILESYSTEM_T_DEFINED
typedef struct _shared/fty_asset_uptime_configurator_t shared/fty_asset_uptime_configurator_t;
#define SHARED/FTY_ASSET_UPTIME_CONFIGURATOR_T_DEFINED
typedef struct _shared/ic_t shared/ic_t;
#define SHARED/IC_T_DEFINED
typedef struct _shared/log_t shared/log_t;
#define SHARED/LOG_T_DEFINED
typedef struct _shared/data_t shared/data_t;
#define SHARED/DATA_T_DEFINED
typedef struct _shared/str_defs_t shared/str_defs_t;
#define SHARED/STR_DEFS_T_DEFINED
typedef struct _shared/subprocess_t shared/subprocess_t;
#define SHARED/SUBPROCESS_T_DEFINED
typedef struct _shared/tntmlm_t shared/tntmlm_t;
#define SHARED/TNTMLM_T_DEFINED
typedef struct _shared/topic_cache_t shared/topic_cache_t;
#define SHARED/TOPIC_CACHE_T_DEFINED
typedef struct _shared/upsstatus_t shared/upsstatus_t;
#define SHARED/UPSSTATUS_T_DEFINED
typedef struct _shared/utils_t shared/utils_t;
#define SHARED/UTILS_T_DEFINED
typedef struct _shared/utils++_t shared/utils++_t;
#define SHARED/UTILS++_T_DEFINED
typedef struct _shared/utils_web_t shared/utils_web_t;
#define SHARED/UTILS_WEB_T_DEFINED
typedef struct _web/src/asset_computed_impl_t web/src/asset_computed_impl_t;
#define WEB/SRC/ASSET_COMPUTED_IMPL_T_DEFINED
typedef struct _web/src/helpers_t web/src/helpers_t;
#define WEB/SRC/HELPERS_T_DEFINED
typedef struct _web/src/iface_t web/src/iface_t;
#define WEB/SRC/IFACE_T_DEFINED
typedef struct _web/src/location_helpers_t web/src/location_helpers_t;
#define WEB/SRC/LOCATION_HELPERS_T_DEFINED
typedef struct _web/src/sasl_t web/src/sasl_t;
#define WEB/SRC/SASL_T_DEFINED
typedef struct _web/src/tokens_t web/src/tokens_t;
#define WEB/SRC/TOKENS_T_DEFINED
#endif // FTY_REST_BUILD_DRAFT_API


//  Public classes, each with its own header file
#include "app.h"
#include "bios_agent.h"
#include "bios_agent++.h"
#include "bios_export.h"
#include "ymsg.h"
#include "bios-magic.h"
#include "cleanup.h"
#include "dbtypes.h"
#include "defs.h"
#include "filesystem.h"
#include "preproc.h.h"
#ifdef FTY_REST_BUILD_DRAFT_API
#include "db/topology2.h"
#include "git_details_override.h"
#include "shared/asset_types.h"
#include "shared/augtool.h"
#include "shared/cidr.h"
#include "shared/configure_inform.h"
#include "shared/csv.h"
#include "shared/data.h"
#include "shared/dbpath.h"
#include "shared/filesystem.h"
#include "shared/fty_asset_uptime_configurator.h"
#include "shared/ic.h"
#include "shared/log.h"
#include "shared/data.h"
#include "shared/str_defs.h"
#include "shared/subprocess.h"
#include "shared/tntmlm.h"
#include "shared/topic_cache.h"
#include "shared/upsstatus.h"
#include "shared/utils.h"
#include "shared/utils++.h"
#include "shared/utils_web.h"
#include "web/src/asset_computed_impl.h"
#include "web/src/helpers.h"
#include "web/src/iface.h"
#include "web/src/location_helpers.h"
#include "web/src/sasl.h"
#include "web/src/tokens.h"
#endif // FTY_REST_BUILD_DRAFT_API

#ifdef FTY_REST_BUILD_DRAFT_API
//  Self test for private classes
FTY_REST_EXPORT void
    fty_rest_private_selftest (bool verbose);
#endif // FTY_REST_BUILD_DRAFT_API

#endif
/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
*/
