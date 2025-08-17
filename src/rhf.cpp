#include "PGMLLL.h"

#include <NTL/RR.h>
#include <NTL/mat_ZZ.h>

double PgmLLL::rhf()
{
    const NTL::RR hf = NTL::sqrt(NTL::to_RR(this->basis[0] * this->basis[0])) / NTL::pow(NTL::to_RR(NTL::abs(NTL::determinant(basis))), NTL::to_RR(1.0 / this->nrows));
    return NTL::to_double(NTL::pow(hf, NTL::to_RR(1.0 / this->nrows)));
}
