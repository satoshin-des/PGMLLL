#include "PGMLLL.h"
#include "svp_challenge.h"

#include <NTL/LLL.h>

int main(int argc, char *argv[])
{
    long dim = atol(argv[1]);
    double lll_rhf, pgm_rhf, pot_rhf, bkz_5_rhf, bkz_10_rhf, bkz_15_rhf;
    FILE *rhf = fopen("rhf.csv", "w");

    PgmLLL L = svpChallenge(dim, 0), M = L;

    fprintf(rhf, "LLL,PotLLL,PGMLLL,BKZ5,BKZ10,BKZ15\n");

    lll_rhf = L.rhf();

    std::cout << NTL::sqrt(NTL::to_RR(L.basis[0] * L.basis[0])) << std::endl;

    L.openFile("log_pgm.csv");
    L.pgmLLL(0.99);
    L.closeFile();

    pgm_rhf = L.rhf();

    std::cout << NTL::sqrt(NTL::to_RR(L.basis[0] * L.basis[0])) << std::endl;

    NTL::BKZ_FP(L.basis, 0.99, 5);
    bkz_5_rhf = L.rhf();

    NTL::BKZ_FP(L.basis, 0.99, 10);
    bkz_10_rhf = L.rhf();

    NTL::BKZ_FP(L.basis, 0.99, 15);
    bkz_15_rhf = L.rhf();

    M.potLLL(0.99);
    pot_rhf = M.rhf();

    fprintf(rhf, "%.20lf,%.20lf,%.20lf,%.20lf,%.20lf,%.20lf\n", lll_rhf, pot_rhf, pgm_rhf, bkz_5_rhf, bkz_10_rhf, bkz_15_rhf);

    fclose(rhf);

    return 0;
}
