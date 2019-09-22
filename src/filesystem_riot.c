// Copyright 2017 Open Source Robotics Foundation, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#if __cplusplus
extern "C"
{
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//#include "rcutils/concat.h"
#include "rcutils/filesystem.h"

bool
rcutils_get_cwd(char * buffer, size_t max_length)
{
  return false;
}

bool
rcutils_is_directory(const char * abs_path)
{
  return false;
}

bool
rcutils_is_file(const char * abs_path)
{
  return false;
}

bool
rcutils_exists(const char * abs_path)
{
  return false;
}

bool
rcutils_is_readable(const char * abs_path)
{
  return false;
}

bool
rcutils_is_writable(const char * abs_path)
{
  return false;
}

bool
rcutils_is_readable_and_writable(const char * abs_path)
{
  return false;
}

char *
rcutils_join_path(const char * left_hand_path, const char * right_hand_path, rcutils_allocator_t allocator)
{
  return NULL;
}

#if __cplusplus
}
#endif
