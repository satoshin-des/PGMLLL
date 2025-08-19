#include "PGMLLL.h"

#include <vector>

void PgmLLL::gramSchmidt()
{
    FLOAT sum;
    std::vector<std::vector<FLOAT>> GSOb(this->nrows, std::vector<FLOAT>(this->nrows));

    for (int i = 0, j, k; i < this->nrows; ++i)
    {
        this->m_mu[i][i] = 1.0;
        for (j = 0; j < this->nrows; ++j)
        {
            GSOb[i][j] = NTL::to_double(this->basis[i][j]);
        }
        for (j = 0; j < i; ++j)
        {
            sum = 0;
            for (k = 0; k < this->nrows; ++k)
            {
                sum += NTL::to_double(this->basis[i][k]) * GSOb[j][k];
            }
            this->m_mu[i][j] = sum / this->m_B[j];
            for (k = 0; k < this->nrows; ++k)
            {
                GSOb[i][k] -= this->m_mu[i][j] * GSOb[j][k];
            }
        }
        this->m_B[i] = 0;
        for (j = 0; j < this->nrows; ++j)
        {
            this->m_B[i] += GSOb[i][j] * GSOb[i][j];
        }
    }
}
