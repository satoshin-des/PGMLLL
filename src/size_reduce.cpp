#include "PGMLLL.h"

#include <NTL/mat_RR.h>
#include <NTL/mat_ZZ.h>
#include <NTL/RR.h>

void PgmLLL::sizeReduce(const long i, const long j)
{
    if (NTL::abs(this->m_mu[i][j]) > 0.5)
    {
        const NTL::RR q = NTL::round(this->m_mu[i][j]);
        this->basis[i] -= NTL::to_ZZ(q) * this->basis[j];
        for (long l = 0; l <= j; ++l)
        {
            this->m_mu[i][l] -= q * this->m_mu[j][l];
        }
    }
}
