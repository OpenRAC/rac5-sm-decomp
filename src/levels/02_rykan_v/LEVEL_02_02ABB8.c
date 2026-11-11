extern char *D_00208C2C;

int func_02ABB8(unsigned int bit)
{
    return (*(unsigned int *)(D_00208C2C + 0x1940) &
            (1u << bit)) > 0u;
}
