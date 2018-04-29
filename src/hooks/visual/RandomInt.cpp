/*
  Created by Jenny White on 29.04.18.
  Copyright (c) 2018 nullworks. All rights reserved.
*/

#include "HookedMethods.hpp"

namespace hooked_methods
{

DEFINE_HOOKED_METHOD(RandomInt, int, IUniformRandomStream *this_, int min,
                     int max)
{
    if (medal_flip && min == 0 && max == 9)
        return 0;

    return original::RandomInt(this_, min, max);
}
}