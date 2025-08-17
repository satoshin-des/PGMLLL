#include "PGMLLL.h"
#include "svp_challenge.h"

int main(int argc, char *argv[])
{
    long dim = atol(argv[1]);

    PgmLLL L = svpChallenge(dim, 0);

    std::cout << NTL::sqrt(NTL::to_RR(L.basis[0] * L.basis[0])) << std::endl;

    L.openFile("log_pgm.csv");
    L.pgmLLL(0.99);
    L.closeFile();

    std::cout << NTL::sqrt(NTL::to_RR(L.basis[0] * L.basis[0])) << std::endl;

    return 0;
}
