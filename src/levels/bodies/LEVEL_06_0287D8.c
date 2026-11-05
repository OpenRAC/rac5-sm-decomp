extern char *D_001E2EAC;

int func_0287D8(unsigned int bit)
{
    return (*(unsigned int *)(D_001E2EAC + 0x1940) &
            (1u << bit)) > 0u;
}
