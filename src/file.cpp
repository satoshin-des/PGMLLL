#include "PGMLLL.h"

void PgmLLL::openFile(const char *file_name)
{
    this->m_file_to_output = fopen(file_name, "w");
    fprintf(this->m_file_to_output, "value\n");
}

void PgmLLL::closeFile()
{
    fclose(this->m_file_to_output);
}
