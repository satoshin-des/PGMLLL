#include "PGMLLL.h"

#include <NTL/mat_RR.h>
#include <NTL/mat_ZZ.h>
#include <NTL/RR.h>
#include <NTL/LLL.h>

PgmLLL::PgmLLL(const long n)
    : nrows(n),
      ncols(n)
{
    this->m_mu.SetDims(n, n);
    this->m_B.SetLength(n);
    this->basis.SetDims(n, n);
}

void PgmLLL::pgmLLL(const double delta)
{
    NTL::RR sum;
    NTL::RR P, Pmin;

    NTL::ComputeGS(this->basis, this->m_mu, this->m_B);

    for (long k = 0, j, i, l; k < this->nrows;)
    {
        fprintf(this->m_file_to_output, "%lf\n", this->logPGM());

        for (j = k - 1; j > -1; --j)
        {
            this->sizeReduce(k, j);
        }

        P = Pmin = 1;
        i = 0;
        for (j = k - 1; j > -1; --j)
        {
            sum = NTL::to_RR(this->basis[k] * this->basis[k]);
            for (l = 0; l < i; ++l)
            {
                sum -= this->m_mu[k][l] * this->m_mu[k][l] * this->m_B[l];
            }
            P *= NTL::pow(sum / this->m_B[i], NTL::to_RR(1.0 / (i + 1)));
            if (P < Pmin)
            {
                i = j;
                Pmin = P;
            }
        }

        if (delta > Pmin)
        {
            this->deepInsertion(i, k);
            this->updateGSODeepInsertion(i, k);
            k = i;
        }
        else
        {
            ++k;
        }
    }
}
