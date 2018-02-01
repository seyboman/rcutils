#include "rcutils/time.h"

#include "xtimer.h"

#include "./common.h"

rcutils_ret_t
rcutils_system_time_now(rcutils_time_point_value_t * now)
{
  RCUTILS_CHECK_ARGUMENT_FOR_NULL(now, RCUTILS_RET_INVALID_ARGUMENT, rcutils_get_default_allocator());
  *now = xtimer_now_usec64();
  return RCUTILS_RET_OK;
}

rcutils_ret_t
rcutils_steady_time_now(rcutils_time_point_value_t * now)
{
  RCUTILS_CHECK_ARGUMENT_FOR_NULL(now, RCUTILS_RET_INVALID_ARGUMENT, rcutils_get_default_allocator());
  *now = xtimer_now_usec64();
  return RCUTILS_RET_OK;
}
