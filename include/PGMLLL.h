#ifndef PGMLLL_H_
#define PGMLLL_H_

#include <iostream>
#include <cmath>
#include <vector>

#include <NTL/mat_ZZ.h>

typedef long double FLOAT;

class PgmLLL
{
private:
    std::vector<std::vector<FLOAT>> m_mu;
    std::vector<FLOAT> m_B;
    FILE *m_file_to_output;

    void updateGSODeepInsertion(const long i, const long k);

public:
    long nrows;
    long ncols;
    NTL::ZZ vol;
    NTL::mat_ZZ basis;

    /**
     * @brief Construct a new PgmLLL object
     *
     * @param n lattice rank
     */
    PgmLLL(const long n);

    /**
     * @brief open file to output
     *
     * @param file_name file name
     */
    void openFile(const char *file_name);

    /**
     * @brief close file
     *
     */
    void closeFile();

    /**
     * @brief compute RHF
     *
     * @return double RHF of basis
     */
    double rhf();

    /**
     * @brief compute log value of PGM
     *
     * @return FLOAT value of PGM
     */
    FLOAT logPGM();

    /**
     * @brief deep-insertion(i, k)
     *
     * @param i index
     * @param k index
     */
    void deepInsertion(const long i, const long k);

    /**
     * @brief Gram-Schmidt orthogonalization
     * 
     */
    void gramSchmidt();

    /**
     * @brief Paratil size-reduction
     *
     * @param i index
     * @param j index
     */
    void sizeReduce(const long i, const long j);

    /**
     * @brief PotLLL-reduction
     * 
     * @param delta reduction parameter
     */
    void potLLL(const double delta);

    /**
     * @brief PGMLLL-reduction
     *
     * @param delta reduction parameter
     */
    void pgmLLL(const double delta);
};

#endif
