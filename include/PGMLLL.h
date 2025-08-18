#ifndef PGMLLL_H_
#define PGMLLL_H_

#include <iostream>
#include <cmath>

#include <NTL/mat_ZZ.h>
#include <NTL/mat_RR.h>

class PgmLLL
{
private:
    NTL::mat_RR m_mu;
    NTL::vec_RR m_B;
    FILE *m_file_to_output;

    void updateGSODeepInsertion(const long i, const long k);

public:
    long nrows;
    long ncols;
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
     * @return NTL::RR log value of PGM
     */
    double logPGM();

    /**
     * @brief deep-insertion(i, k)
     *
     * @param i index
     * @param k index
     */
    void deepInsertion(const long i, const long k);

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
