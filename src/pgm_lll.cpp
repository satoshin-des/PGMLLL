#include "PGMLLL.h"

#include <vector>
#include <cmath>

#include <NTL/mat_ZZ.h>
#include <NTL/LLL.h>

PgmLLL::PgmLLL(const long n)
    : nrows(n),
      ncols(n)
{
    this->m_mu.resize(n);
    this->m_B.resize(n);
    for(long i = 0; i < n; ++i)
    {
        this->m_mu[i].resize(n);
    }
    this->basis.SetDims(n, n);
}

void PgmLLL::pgmLLL(const double delta)
{
    FLOAT sum;
    FLOAT P, Pmin;

    this->gramSchmidt();

    for (long k = 0, j, i, l; k < this->nrows;)
    {
        // fprintf(this->m_file_to_output, "%lf\n", static_cast<double>(this->logPGM()));

        for (j = k - 1; j > -1; --j)
        {
            this->sizeReduce(k, j);
        }

        P = Pmin = 1;
        i = 0;
        for (j = k - 1; j > -1; --j)
        {
            sum = this->m_B[k];
            for (l = j; l < k; ++l)
            {
                sum += this->m_mu[k][l] * this->m_mu[k][l] * this->m_B[l];
            }
            P *= std::pow(sum / this->m_B[j], 1.0 / (j + 1));
            if (P < Pmin)
            {
                i = j;
                Pmin = P;
            }
        }

        if (std::pow(delta, 1.0 / (i + 1)) > Pmin)
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
