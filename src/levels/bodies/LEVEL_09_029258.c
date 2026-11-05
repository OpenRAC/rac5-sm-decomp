extern char *D_001DDDAC;

int func_029258(unsigned int bit)
{
    return (*(unsigned int *)(D_001DDDAC + 0x1940) &
            (1u << bit)) > 0u;
}
