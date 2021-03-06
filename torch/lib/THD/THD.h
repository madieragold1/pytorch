#pragma once

#ifdef __cplusplus
#define THD_API extern "C"
#else
#define THD_API
#endif

#ifndef _THD_CORE
#include "base/TensorDescriptor.h"
#include "base/DataChannelRequest.h"
#else
#include "base/TensorDescriptor.hpp"
#include "base/DataChannelRequest.hpp"
#endif
#include "base/ChannelType.h"
#include "base/Cuda.h"

#include "process_group/General.h"
#include "process_group/Collectives.h"
