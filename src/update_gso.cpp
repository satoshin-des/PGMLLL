#include "PGMLLL.h"

#include <vector>
#include <cmath>

void PgmLLL::updateGSODeepInsertion(const long i, const long k)
{
    long j, l;
    FLOAT t, eps;
    std::vector<FLOAT> P(this->nrows), D(this->nrows), S(this->nrows);

    P[k] = D[k] = this->m_B[k];
    for (j = k - 1; j >= i; --j)
    {
        P[j] = this->m_mu[k][j] * this->m_B[j];
        D[j] = D[j + 1] + this->m_mu[k][j] * P[j];
    }

    for (j = k; j > i; --j)
    {
        t = this->m_mu[k][j - 1] / D[j];
        for (l = this->nrows - 1; l > k; --l)
        {
            S[l] += this->m_mu[l][j] * P[j];
            this->m_mu[l][j] = this->m_mu[l][j - 1] - t * S[l];
        }
        for (l = k; l > j; --l)
        {
            S[l] += this->m_mu[l - 1][j] * P[j];
            this->m_mu[l][j] = this->m_mu[l - 1][j - 1] - t * S[l];
        }
    }

    t = 1 / D[i];

    for (l = this->nrows - 1; l > k; --l)
    {
        this->m_mu[l][i] = t * (S[l] + this->m_mu[l][i] * P[i]);
    }
    for (l = k; l > i + 1; --l)
    {
        this->m_mu[l][i] = t * (S[l] + this->m_mu[l - 1][i] * P[i]);
    }

    this->m_mu[i + 1][i] = t * P[i];
    for (j = 0; j < i; ++j)
    {
        eps = this->m_mu[k][j];
        for (l = k; l > i; --l)
        {
            this->m_mu[l][j] = this->m_mu[l - 1][j];
        }
        this->m_mu[i][j] = eps;
    }

    for (j = k; j > i; --j)
    {
        this->m_B[j] = D[j] * this->m_B[j - 1] / D[j - 1];
    }
    this->m_B[i] = D[i];
}
