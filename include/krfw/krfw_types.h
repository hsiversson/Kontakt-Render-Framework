#pragma once

#include <cstdint>
#include <cfloat>
#include <limits>

using int8 = int8_t;
using int16 = int16_t;
using int32 = int32_t;
using int64 = int64_t;

using uint8 = uint8_t;
using uint16 = uint16_t;
using uint32 = uint32_t;
using uint64 = uint64_t;

static constexpr int8  KRFW_INT8_MAX  = std::numeric_limits<int8 >::max();
static constexpr int8  KRFW_INT8_MIN  = std::numeric_limits<int8 >::min();
static constexpr int16 KRFW_INT16_MAX = std::numeric_limits<int16>::max();
static constexpr int16 KRFW_INT16_MIN = std::numeric_limits<int16>::min();
static constexpr int32 KRFW_INT32_MAX = std::numeric_limits<int32>::max();
static constexpr int32 KRFW_INT32_MIN = std::numeric_limits<int32>::min();
static constexpr int64 KRFW_INT64_MAX = std::numeric_limits<int64>::max();
static constexpr int64 KRFW_INT64_MIN = std::numeric_limits<int64>::min();

static constexpr uint8  KRFW_UINT8_MAX  = std::numeric_limits<uint8 >::max();
static constexpr uint16 KRFW_UINT16_MAX = std::numeric_limits<uint16>::max();
static constexpr uint32 KRFW_UINT32_MAX = std::numeric_limits<uint32>::max();
static constexpr uint64 KRFW_UINT64_MAX = std::numeric_limits<uint64>::max();

static constexpr float KRFW_FLOAT_MAX = std::numeric_limits<float>::max();
static constexpr float KRFW_FLOAT_MIN = std::numeric_limits<float>::min();
static constexpr float KRFW_FLOAT_LOWEST = std::numeric_limits<float>::lowest();
static constexpr float KRFW_FLOAT_EPSILON = std::numeric_limits<float>::epsilon();

static constexpr double KRFW_DOUBLE_MAX = std::numeric_limits<double>::max();
static constexpr double KRFW_DOUBLE_MIN = std::numeric_limits<double>::min();
static constexpr double KRFW_DOUBLE_LOWEST = std::numeric_limits<double>::lowest();
static constexpr double KRFW_DOUBLE_EPSILON = std::numeric_limits<double>::epsilon();