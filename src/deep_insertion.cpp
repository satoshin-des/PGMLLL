#include "PGMLLL.h"

#include <NTL/mat_ZZ.h>
#include <NTL/vec_ZZ.h>

void PgmLLL::deepInsertion(const long i, const long k)
{
    const NTL::vec_ZZ t = this->basis[k];
    for (long j = k; j > i; --j)
    {
        this->basis[j] = this->basis[j - 1];
    }
    this->basis[i] = t;
}
