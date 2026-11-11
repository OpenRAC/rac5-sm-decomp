extern char *D_00148C2C;

int func_023BC8(unsigned int bit)
{
    return (*(unsigned int *)(D_00148C2C + 0x1940) &
            (1u << bit)) > 0u;
}
