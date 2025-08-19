#include "PGMLLL.h"

#include <cmath>

FLOAT PgmLLL::logPGM()
{
    FLOAT gm, p;

    p = 0;
    for (long k = 0, i; k < this->nrows; ++k)
    {
        gm = 0;
        for (i = 0; i <= k; ++i)
        {
            gm += std::log(this->m_B[i]);
        }
        p += std::log(gm) / (k + 1);
    }

    return p;
}
