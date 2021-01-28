#pragma once

#include "quantum.h"
// readability
#define XXX KC_NO

#define LAYOUT( \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c,      k0e, k0f, \
    k10,      k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c, k1d, k1e, k1f, \
    k20,      k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, k2c, k2d,      k2f, \
         k31, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b,      k3d, k3e, k3f, \
    k40, k41,      k43,           k46,                k4a, k4b, k4c, k4d, k4e, k4f \
) \
{ \
    {k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, XXX, k0e, k0f}, \
    {k10, XXX, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c, k1d, k1e, k1f}, \
    {k20, XXX, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, k2c, k2d, XXX, k2f}, \
    {XXX, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, XXX, k3d, k3e, k3f}, \
    {k40, k41, XXX, k43, XXX, XXX, k46, XXX, XXX, XXX, k4a, k4b, k4c, k4d, k4e, k4f} \
}
