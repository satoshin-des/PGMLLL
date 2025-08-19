#include "PGMLLL.h"

#include <vector>
#include <cmath>

#include <NTL/RR.h>
#include <NTL/mat_ZZ.h>
#include <NTL/LLL.h>

void PgmLLL::potLLL(const double delta)
{
    FLOAT sum;
    FLOAT P, Pmin;

    this->gramSchmidt();

    for (long k = 0, j, i, l; k < this->nrows;)
    {
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
            P *= sum / this->m_B[j];
            if (P < Pmin)
            {
                i = j;
                Pmin = P;
            }
        }

        if (delta > Pmin)
        {
            this->deepInsertion(i, k);
            // NTL::ComputeGS(this->basis, this->m_mu, this->m_B);
            this->updateGSODeepInsertion(i, k);
            k = i;
        }
        else
        {
            ++k;
        }
    }
}
