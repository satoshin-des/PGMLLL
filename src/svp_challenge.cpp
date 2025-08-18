#include "svp_challenge.h"

#include "PGMLLL.h"

PgmLLL svpChallenge(const long dim, const long seed)
{
    PgmLLL lattice(dim);

    if ((dim == 40) and (seed == 0))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_40_0[i][j];
    if ((dim == 40) and (seed == 1))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_40_1[i][j];
    if ((dim == 40) and (seed == 2))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_40_2[i][j];
    if ((dim == 40) and (seed == 3))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_40_3[i][j];
    if ((dim == 40) and (seed == 4))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_40_4[i][j];
    if ((dim == 40) and (seed == 5))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_40_5[i][j];
    if ((dim == 40) and (seed == 6))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_40_6[i][j];
    if ((dim == 40) and (seed == 7))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_40_7[i][j];
    if ((dim == 40) and (seed == 8))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_40_8[i][j];
    if ((dim == 40) and (seed == 9))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_40_9[i][j];
    if ((dim == 50) and (seed == 0))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_50_0[i][j];
    if ((dim == 50) and (seed == 1))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_50_1[i][j];
    if ((dim == 50) and (seed == 2))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_50_2[i][j];
    if ((dim == 50) and (seed == 3))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_50_3[i][j];
    if ((dim == 50) and (seed == 4))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_50_4[i][j];
    if ((dim == 50) and (seed == 5))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_50_5[i][j];
    if ((dim == 50) and (seed == 6))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_50_6[i][j];
    if ((dim == 50) and (seed == 7))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_50_7[i][j];
    if ((dim == 50) and (seed == 8))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_50_8[i][j];
    if ((dim == 50) and (seed == 9))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_50_9[i][j];
    if ((dim == 60) and (seed == 0))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_60_0[i][j];
    if ((dim == 60) and (seed == 1))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_60_1[i][j];
    if ((dim == 60) and (seed == 2))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_60_2[i][j];
    if ((dim == 60) and (seed == 3))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_60_3[i][j];
    if ((dim == 60) and (seed == 4))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_60_4[i][j];
    if ((dim == 60) and (seed == 5))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_60_5[i][j];
    if ((dim == 60) and (seed == 6))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_60_6[i][j];
    if ((dim == 60) and (seed == 7))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_60_7[i][j];
    if ((dim == 60) and (seed == 8))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_60_8[i][j];
    if ((dim == 60) and (seed == 9))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_60_9[i][j];
    if ((dim == 70) and (seed == 0))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_70_0[i][j];
    if ((dim == 70) and (seed == 1))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_70_1[i][j];
    if ((dim == 70) and (seed == 2))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_70_2[i][j];
    if ((dim == 70) and (seed == 3))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_70_3[i][j];
    if ((dim == 70) and (seed == 4))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_70_4[i][j];
    if ((dim == 70) and (seed == 5))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_70_5[i][j];
    if ((dim == 70) and (seed == 6))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_70_6[i][j];
    if ((dim == 70) and (seed == 7))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_70_7[i][j];
    if ((dim == 70) and (seed == 8))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_70_8[i][j];
    if ((dim == 70) and (seed == 9))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_70_9[i][j];
    if ((dim == 80) and (seed == 0))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_80_0[i][j];
    if ((dim == 80) and (seed == 1))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_80_1[i][j];
    if ((dim == 80) and (seed == 2))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_80_2[i][j];
    if ((dim == 80) and (seed == 3))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_80_3[i][j];
    if ((dim == 80) and (seed == 4))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_80_4[i][j];
    if ((dim == 80) and (seed == 5))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_80_5[i][j];
    if ((dim == 80) and (seed == 6))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_80_6[i][j];
    if ((dim == 80) and (seed == 7))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_80_7[i][j];
    if ((dim == 80) and (seed == 8))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_80_8[i][j];
    if ((dim == 80) and (seed == 9))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_80_9[i][j];
    if ((dim == 90) and (seed == 0))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_90_0[i][j];
    if ((dim == 90) and (seed == 1))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_90_1[i][j];
    if ((dim == 90) and (seed == 2))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_90_2[i][j];
    if ((dim == 90) and (seed == 3))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_90_3[i][j];
    if ((dim == 90) and (seed == 4))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_90_4[i][j];
    if ((dim == 90) and (seed == 5))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_90_5[i][j];
    if ((dim == 90) and (seed == 6))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_90_6[i][j];
    if ((dim == 90) and (seed == 7))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_90_7[i][j];
    if ((dim == 90) and (seed == 8))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_90_8[i][j];
    if ((dim == 90) and (seed == 9))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_90_9[i][j];
    if ((dim == 100) and (seed == 0))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_100_0[i][j];
    if ((dim == 100) and (seed == 1))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_100_1[i][j];
    if ((dim == 100) and (seed == 2))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_100_2[i][j];
    if ((dim == 100) and (seed == 3))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_100_3[i][j];
    if ((dim == 100) and (seed == 4))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_100_4[i][j];
    if ((dim == 100) and (seed == 5))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_100_5[i][j];
    if ((dim == 100) and (seed == 6))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_100_6[i][j];
    if ((dim == 100) and (seed == 7))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_100_7[i][j];
    if ((dim == 100) and (seed == 8))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_100_8[i][j];
    if ((dim == 100) and (seed == 9))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_100_9[i][j];
    if ((dim == 110) and (seed == 0))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_110_0[i][j];
    if ((dim == 110) and (seed == 1))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_110_1[i][j];
    if ((dim == 110) and (seed == 2))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_110_2[i][j];
    if ((dim == 110) and (seed == 3))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_110_3[i][j];
    if ((dim == 110) and (seed == 4))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_110_4[i][j];
    if ((dim == 110) and (seed == 5))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_110_5[i][j];
    if ((dim == 110) and (seed == 6))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_110_6[i][j];
    if ((dim == 110) and (seed == 7))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_110_7[i][j];
    if ((dim == 110) and (seed == 8))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_110_8[i][j];
    if ((dim == 110) and (seed == 9))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_110_9[i][j];
    if ((dim == 120) and (seed == 0))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_120_0[i][j];
    if ((dim == 120) and (seed == 1))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_120_1[i][j];
    if ((dim == 120) and (seed == 2))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_120_2[i][j];
    if ((dim == 120) and (seed == 3))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_120_3[i][j];
    if ((dim == 120) and (seed == 4))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_120_4[i][j];
    if ((dim == 120) and (seed == 5))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_120_5[i][j];
    if ((dim == 120) and (seed == 6))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_120_6[i][j];
    if ((dim == 120) and (seed == 7))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_120_7[i][j];
    if ((dim == 120) and (seed == 8))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_120_8[i][j];
    if ((dim == 120) and (seed == 9))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_120_9[i][j];
    if ((dim == 130) and (seed == 0))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_130_0[i][j];
    if ((dim == 130) and (seed == 1))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_130_1[i][j];
    if ((dim == 130) and (seed == 2))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_130_2[i][j];
    if ((dim == 130) and (seed == 3))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_130_3[i][j];
    if ((dim == 130) and (seed == 4))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_130_4[i][j];
    if ((dim == 130) and (seed == 5))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_130_5[i][j];
    if ((dim == 130) and (seed == 6))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_130_6[i][j];
    if ((dim == 130) and (seed == 7))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_130_7[i][j];
    if ((dim == 130) and (seed == 8))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_130_8[i][j];
    if ((dim == 130) and (seed == 9))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_130_9[i][j];
    if ((dim == 140) and (seed == 0))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_140_0[i][j];
    if ((dim == 140) and (seed == 1))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_140_1[i][j];
    if ((dim == 140) and (seed == 2))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_140_2[i][j];
    if ((dim == 140) and (seed == 3))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_140_3[i][j];
    if ((dim == 140) and (seed == 4))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_140_4[i][j];
    if ((dim == 140) and (seed == 5))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_140_5[i][j];
    if ((dim == 140) and (seed == 6))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_140_6[i][j];
    if ((dim == 140) and (seed == 7))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_140_7[i][j];
    if ((dim == 140) and (seed == 8))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_140_8[i][j];
    if ((dim == 140) and (seed == 9))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_140_9[i][j];
    if ((dim == 150) and (seed == 0))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_150_0[i][j];
    if ((dim == 150) and (seed == 1))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_150_1[i][j];
    if ((dim == 150) and (seed == 2))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_150_2[i][j];
    if ((dim == 150) and (seed == 3))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_150_3[i][j];
    if ((dim == 150) and (seed == 4))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_150_4[i][j];
    if ((dim == 150) and (seed == 5))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_150_5[i][j];
    if ((dim == 150) and (seed == 6))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_150_6[i][j];
    if ((dim == 150) and (seed == 7))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_150_7[i][j];
    if ((dim == 150) and (seed == 8))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_150_8[i][j];
    if ((dim == 150) and (seed == 9))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_150_9[i][j];
    if ((dim == 160) and (seed == 0))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_160_0[i][j];
    if ((dim == 160) and (seed == 1))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_160_1[i][j];
    if ((dim == 160) and (seed == 2))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_160_2[i][j];
    if ((dim == 160) and (seed == 3))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_160_3[i][j];
    if ((dim == 160) and (seed == 4))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_160_4[i][j];
    if ((dim == 160) and (seed == 5))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_160_5[i][j];
    if ((dim == 160) and (seed == 6))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_160_6[i][j];
    if ((dim == 160) and (seed == 7))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_160_7[i][j];
    if ((dim == 160) and (seed == 8))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_160_8[i][j];
    if ((dim == 160) and (seed == 9))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_160_9[i][j];
    if ((dim == 170) and (seed == 0))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_170_0[i][j];
    if ((dim == 170) and (seed == 1))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_170_1[i][j];
    if ((dim == 170) and (seed == 2))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_170_2[i][j];
    if ((dim == 170) and (seed == 3))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_170_3[i][j];
    if ((dim == 170) and (seed == 4))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_170_4[i][j];
    if ((dim == 170) and (seed == 5))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_170_5[i][j];
    if ((dim == 170) and (seed == 6))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_170_6[i][j];
    if ((dim == 170) and (seed == 7))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_170_7[i][j];
    if ((dim == 170) and (seed == 8))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_170_8[i][j];
    if ((dim == 170) and (seed == 9))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_170_9[i][j];
    if ((dim == 180) and (seed == 0))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_180_0[i][j];
    if ((dim == 180) and (seed == 1))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_180_1[i][j];
    if ((dim == 180) and (seed == 2))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_180_2[i][j];
    if ((dim == 180) and (seed == 3))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_180_3[i][j];
    if ((dim == 180) and (seed == 4))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_180_4[i][j];
    if ((dim == 180) and (seed == 5))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_180_5[i][j];
    if ((dim == 180) and (seed == 6))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_180_6[i][j];
    if ((dim == 180) and (seed == 7))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_180_7[i][j];
    if ((dim == 180) and (seed == 8))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_180_8[i][j];
    if ((dim == 180) and (seed == 9))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_180_9[i][j];
    if ((dim == 190) and (seed == 0))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_190_0[i][j];
    if ((dim == 190) and (seed == 1))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_190_1[i][j];
    if ((dim == 190) and (seed == 2))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_190_2[i][j];
    if ((dim == 190) and (seed == 3))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_190_3[i][j];
    if ((dim == 190) and (seed == 4))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_190_4[i][j];
    if ((dim == 190) and (seed == 5))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_190_5[i][j];
    if ((dim == 190) and (seed == 6))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_190_6[i][j];
    if ((dim == 190) and (seed == 7))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_190_7[i][j];
    if ((dim == 190) and (seed == 8))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_190_8[i][j];
    if ((dim == 190) and (seed == 9))
        for (int i = 0, j; i < dim; ++i)
            for (j = 0; j < dim; ++j)
                lattice.basis[i][j] = svp_190_9[i][j];

    lattice.vol = NTL::abs(NTL::determinant(lattice.basis));

    return lattice;
}
