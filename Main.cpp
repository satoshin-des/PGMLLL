#include "PGMLLL.h"
#include "svp_challenge.h"

#include <NTL/LLL.h>

int main(int argc, char *argv[])
{
    long dim = atol(argv[1]);
    double lll_rhf, pgm_rhf, bkz_rhf;
    FILE *rhf = fopen("rhf.csv", "w");

    PgmLLL L = svpChallenge(dim, 0);

    fprintf(rhf, "LLL,PGMLLL,BKZ\n");

    lll_rhf = L.rhf();

    std::cout << NTL::sqrt(NTL::to_RR(L.basis[0] * L.basis[0])) << std::endl;

    L.openFile("log_pgm.csv");
    L.pgmLLL(0.99);
    L.closeFile();

    pgm_rhf = L.rhf();

    std::cout << NTL::sqrt(NTL::to_RR(L.basis[0] * L.basis[0])) << std::endl;

    NTL::BKZ_FP(L.basis, 0.99, 15);

    bkz_rhf = L.rhf();

    fprintf(rhf, "%lf,%lf,%lf\n", lll_rhf, pgm_rhf, bkz_rhf);

    fclose(rhf);

    return 0;
}
