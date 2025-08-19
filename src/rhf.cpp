#include "PGMLLL.h"

#include <cmath>

#include <NTL/RR.h>
#include <NTL/mat_ZZ.h>

FLOAT PgmLLL::rhf()
{
    const FLOAT hf = std::sqrt(NTL::to_double(this->basis[0] * this->basis[0])) / std::pow(NTL::to_double(this->vol), 1.0 / this->nrows);
    return std::pow(hf, 1.0 / this->nrows);
}
