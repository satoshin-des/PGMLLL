#include "PGMLLL.h"

#include <NTL/RR.h>

double PgmLLL::logPGM()
{
    NTL::RR gm, p;

    p = 0;
    for (long k = 0, i; k < this->nrows; ++k)
    {
        gm = 0;
        for (i = 0; i <= k; ++i)
        {
            gm += NTL::log(this->m_B[i]);
        }
        p += NTL::log(gm) / (k + 1);
    }

    return NTL::to_double(p);
}
