extern char *D_001FCFAC;

int func_02A1C8(unsigned int bit)
{
    return (*(unsigned int *)(D_001FCFAC + 0x1940) &
            (1u << bit)) > 0u;
}
